# CTE \(Cuboid's Text Adventure Engine\)

To run a game in CTE, create a file in the same directory called `game.json`. This will contain the code for your game.
In JSON/CTE, there are 4 things you should know about. Braces \(\{\}\) mean a *dictionary*.
An object contains pairs of *keys*, and *values*. Each key corresponds to a value, and duplicate keys are not allowed.
Key values are seperated by \:, and pairs are seperated by commas.

e.g
```
{
	"foo": "bar",
	"baz": "quux"
}
```
Brackets \(\[\]\) mean an array.
An array is a bunch of items seperated by commas.

e.g
```
[
	"foo",
	"bar"
]
```
Strings contain text, and are delimited by string.

e.g
```
"foobar, baz quux."
```
Null means nothing.

e.g
```
null
```

In CTE, Dictionaries mean a situation.
The first key describes the situation and the value of that pair is always `null`, e.g
```
{
	"A Foo attacks you!": null
}
```

The keys after that give options. The value of each pair can be a dictionary or array.
The value will dictate the situation after that option is selected.

e.g
```
{
	"The Foo blocks your way!": null,
	"Stab the Foo": {
		etc.
	},
	"Run away": {
		etc.
	},
	"Beg for mercy": {
		etc.
	}
}
```

Arrays mean an ending. The array should only contain a single string, and that string should contain a backtick \(\`\)
The text before a backtick represents the ending message, and the text after the last backtick represents the name of the ending.

e.g
```
{
	etc.
	"Some action": [
		"A giant fire ball fell from the sky, and you died.`BAD ENDING"
	]
}
```

Also, anywhere you put `%(name)s`, it will be replaced by the player's username capitalized.

There is another file, called `config.json` which contains metadata about the window.
It contains a dictionary, containing lots of key value pairs.

e.g
```
{
	"color": "#000000",
	"width": "1280",
	"height": "720",
	"title": "FooBar",
	"resizeable": false
}
```

Have fun making games! An example game has been included.