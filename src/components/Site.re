let goBack = _e => ReasonReactRouter.push("/");

[@react.component]
let make = (~id) => {
  let place = Data.places |> List.find((place: Data.place) => place.id == id);
  <div className="site-container">
    <div className="site-container__back-button-container">
      <div className="site-container__back-button" onClick=goBack>
        {React.string({j|← BACK|j})}
      </div>
    </div>
    <div className="site-container__bottom-container">
      <div className="site-container__bottom-container__panel--left">
        <img className="site__image" src={place.image.url} />
      </div>
      <div className="site-container__bottom-container__panel--right">
        <div> {React.string(place.name)} </div>
        <div> {React.string(place.description)} </div>
      </div>
    </div>
  </div>;
};