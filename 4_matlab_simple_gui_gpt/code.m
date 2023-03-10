% create the main window
fig = uifigure('Name', 'Hello World GUI');

% create the label and add it to the window
label = uilabel(fig, 'Text', 'Hello World!');
label.FontSize = 24;
label.Position = [100, 100, 200, 50];
