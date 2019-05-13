object Form2: TForm2
  Left = 516
  Top = 464
  Width = 269
  Height = 155
  BorderIcons = []
  Caption = #1047#1072#1076#1072#1085#1080#1077' '#1076#1086#1083#1075#1086#1090#1099
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Button1: TButton
    Left = 88
    Top = 88
    Width = 75
    Height = 25
    Caption = 'OK'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 176
    Top = 88
    Width = 75
    Height = 25
    Caption = #1054#1090#1084#1077#1085#1072
    TabOrder = 1
    OnClick = Button2Click
  end
  object RadioButton1: TRadioButton
    Left = 8
    Top = 8
    Width = 70
    Height = 17
    Caption = '100'
    TabOrder = 2
  end
  object RadioButton2: TRadioButton
    Left = 8
    Top = 32
    Width = 70
    Height = 17
    Caption = '200'
    Checked = True
    TabOrder = 3
    TabStop = True
  end
  object RadioButton3: TRadioButton
    Left = 8
    Top = 56
    Width = 70
    Height = 25
    Caption = '300'
    TabOrder = 4
  end
  object RadioButton4: TRadioButton
    Left = 144
    Top = 8
    Width = 70
    Height = 17
    Caption = '400'
    TabOrder = 5
  end
  object RadioButton5: TRadioButton
    Left = 144
    Top = 32
    Width = 70
    Height = 17
    Caption = '500'
    TabOrder = 6
  end
end
