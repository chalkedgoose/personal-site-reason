// The {j|...|j} feature is just string interpolation, from
// bucklescript.github.io/docs/en/interop-cheatsheet#string-unicode-interpolation
// This allows us to conveniently write CSS, together with variables, by
// constructing a string
let style = {j|
h1 {
	font-family: -apple-system, BlinkMacSystemFont, "Segoe UI", Roboto, Oxygen, Ubuntu, Cantarell, "Fira Sans", "Droid Sans", "Helvetica Neue", Arial, sans-serif, "Apple Color Emoji", "Segoe UI Emoji", "Segoe UI Symbol";
	color: rgb(68, 68, 68);
	text-size-adjust: 100%;
	-webkit-font-smoothing: antialiased;
	box-sizing: inherit;
	text-rendering: optimizeLegibility;
	user-select: none;
	-webkit-user-drag: none;
	margin: 0;
	padding: 0;
	font-size: 50px;
	line-height: 56px;
	max-width: 1200px;
	font-weight: 600;
}

p {
	font-family: -apple-system, BlinkMacSystemFont, "Segoe UI", Roboto, Oxygen, Ubuntu, Cantarell, "Fira Sans", "Droid Sans", "Helvetica Neue", Arial, sans-serif, "Apple Color Emoji", "Segoe UI Emoji", "Segoe UI Symbol";
	color: rgb(68, 68, 68);
	text-size-adjust: 100%;
	-webkit-font-smoothing: antialiased;
	box-sizing: inherit;
	text-rendering: optimizeLegibility;
	user-select: none;
	-webkit-user-drag: none;
	font-style: inherit;
	font-weight: inherit;
	font-size: 18px;
	line-height: 24px;
	margin: 12px;
}

.container {
  padding-right: 15px;
  padding-left: 15px;
  margin-right: auto;
  margin-left: auto;
}
@media (min-width: 768px) {
  .container {
    width: 750px;
  }
}
@media (min-width: 992px) {
  .container {
    width: 970px;
  }
}
@media (min-width: 1200px) {
  .container {
    width: 1170px;
  }
}


.hidden-list-container:hover>ul>li {
	font-family: -apple-system, BlinkMacSystemFont, "Segoe UI", Roboto, Oxygen, Ubuntu, Cantarell, "Fira Sans", "Droid Sans", "Helvetica Neue", Arial, sans-serif, "Apple Color Emoji", "Segoe UI Emoji", "Segoe UI Symbol";
	color: rgb(68, 68, 68);
	text-size-adjust: 100%;
	-webkit-font-smoothing: antialiased;
	box-sizing: inherit;
	text-rendering: optimizeLegibility;
	user-select: none;
	-webkit-user-drag: none;
	font-style: inherit;
	font-weight: inherit;
	font-size: 18px;
	line-height: 24px;
	margin: 12px;
}


.hidden-list-container>ul {
	display: none;
}

.hidden-list-container:hover>ul {
	display: block;
	list-style: none;
}

.hidden-list-container {
  border-style: solid;
  border-width: 0.5px;
  margin-bottom: 1rem;
}

.scale-up-center {
	-webkit-animation: scale-up-center 0.4s cubic-bezier(0.390, 0.575, 0.565, 1.000) both;
	        animation: scale-up-center 0.4s cubic-bezier(0.390, 0.575, 0.565, 1.000) both;
}

@-webkit-keyframes scale-up-center {
  0% {
    -webkit-transform: scale(0.5);
            transform: scale(0.5);
  }
  100% {
    -webkit-transform: scale(1);
            transform: scale(1);
  }
}
@keyframes scale-up-center {
  0% {
    -webkit-transform: scale(0.5);
            transform: scale(0.5);
  }
  100% {
    -webkit-transform: scale(1);
            transform: scale(1);
  }
}



body {
	display: flex;
	flex-direction: column;
	align-items: center;
}
|j};
