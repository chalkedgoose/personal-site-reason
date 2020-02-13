'use strict';

var React = require("react");
var ReactDom = require("react-dom");
var Application$ReasonReactExamples = require("./Application/Application.bs.js");
var ExampleStyles$ReasonReactExamples = require("./ExampleStyles.bs.js");

var style = document.createElement("style");

document.head.appendChild(style);

style.innerHTML = ExampleStyles$ReasonReactExamples.style;

function makeContainer(param) {
  var container = document.createElement("div");
  container.className = "container";
  var content = document.createElement("div");
  content.className = "containerContent";
  container.appendChild(content);
  document.body.appendChild(container);
  return content;
}

ReactDom.render(React.createElement(Application$ReasonReactExamples.make, { }), makeContainer(/* () */0));

exports.style = style;
exports.makeContainer = makeContainer;
/* style Not a pure module */
