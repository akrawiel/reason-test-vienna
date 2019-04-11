let goToSite = (id, _e) => ReasonReactRouter.push({j|/site/$id|j});

[@react.component]
let make = (~place: Data.place) =>
  <div className="tile-list__tile" role="button" onClick={goToSite(place.id)}>
    <div className="tile-list__tile__image-container">
      <img className="tile-list__tile__image" src={place.image.url} />
      <div className="tile-list__tile__image-overlay" />
    </div>
    <div className="tile-list__tile__label"> {React.string(place.name)} </div>
    <div className="tile-list__tile__description">
      {React.string(place.description)}
    </div>
  </div>;