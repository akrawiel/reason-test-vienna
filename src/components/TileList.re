let renderedPlaces =
  ""
  |> Data.search
  |> List.map(({name, description, image: {url}}: Data.place) =>
       <div className="tile-list__tile" key=name role="button">
         <div className="tile-list__tile__image-container">
           <img className="tile-list__tile__image" src=url />
           <div className="tile-list__tile__image-overlay" />
         </div>
         <div className="tile-list__tile__label"> {React.string(name)} </div>
         <div className="tile-list__tile__description">
           {React.string(description)}
         </div>
       </div>
     )
  |> Array.of_list;

let header =
  <div className="tile-list__header">
    <div className="tile-list__header__label">
      {React.string("List of random places")}
    </div>
    <div className="tile-list__header__sublabel">
      {React.string({j|Let's pretend it's a city guide 😅|j})}
    </div>
  </div>;

[@react.component]
let make = () =>
  <div className="tile-list__container">
    header
    {React.array(renderedPlaces)}
  </div>;