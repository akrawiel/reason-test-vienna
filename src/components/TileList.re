let renderedPlaces = term =>
  term
  |> Data.search
  |> List.map((place: Data.place) => <Tile key={place.id} place />)
  |> Array.of_list;

let header = (term, setTerm) =>
  <div className="tile-list__header">
    <div className="tile-list__header__label">
      {React.string("List of random places")}
    </div>
    <div className="tile-list__header__sublabel">
      {React.string({j|Let's pretend it's a city guide 😅|j})}
    </div>
    <div className="tile-list__header__input-container">
      <input
        className="tile-list__header__input"
        value=term
        onChange={event => ReactEvent.Form.target(event)##value |> setTerm}
      />
    </div>
  </div>;

[@react.component]
let make = () => {
  let (term, setTerm) = React.useState(() => "");

  <div className="tile-list__container">
    {header(term, setTerm)}
    {React.array(term |> renderedPlaces)}
  </div>;
};