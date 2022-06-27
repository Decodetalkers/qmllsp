module.exports = grammar({
	name: 'qml',
	rules: {
		// repeat get import modules and widget
		source_file: $ => prec(1, choice(
			seq(
				repeat($.getimport),
				$.qmlwidget,
			),
			repeat($.getimport),
			$.qmlwidget,
		)
		),
		// get the import
		getimport: $ => seq(
			"import",
			prec(1, choice(
				seq(
					$.identifier,
					$.number,
				),
				$.identifier
			))),
		//identifier
		identifier: $ => /[a-zA-Z]+/,
		// idname like id, width and etc
		idname: $ => /[a-zA-Z]+/,
		qmlwidget: $ => seq(
			$.identifier,
			seq(
				'{',
				repeat(
					choice(
						$.widgetid,
						$.qmlwidget,
					)
				)
			),
			'}'
		),
		//$.block,
		widgetid: $ => seq(
			$.identifier,
			":",
			choice(
				$.idname,
				$.number,
				$.qmlwidget,
			)
		),
		//block: $ => seq(
		//	'{',
		//	'}'
		//),
		number: $ => /\d+/
	}
});
