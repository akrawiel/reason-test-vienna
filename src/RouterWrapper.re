[@react.component]
let make = () => {
  let url = ReasonReactRouter.useUrl();

  switch (url.path) {
  | ["site", id] => <Site id />
  | _ => <TileList />
  };
};