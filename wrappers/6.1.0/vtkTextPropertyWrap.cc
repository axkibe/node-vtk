/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkTextPropertyWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTextPropertyWrap::ptpl;

VtkTextPropertyWrap::VtkTextPropertyWrap()
{ }

VtkTextPropertyWrap::VtkTextPropertyWrap(vtkSmartPointer<vtkTextProperty> _native)
{ native = _native; }

VtkTextPropertyWrap::~VtkTextPropertyWrap()
{ }

void VtkTextPropertyWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTextProperty").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TextProperty").ToLocalChecked(), ConstructorGetter);
}

void VtkTextPropertyWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTextPropertyWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTextPropertyWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BoldOff", BoldOff);
	Nan::SetPrototypeMethod(tpl, "boldOff", BoldOff);

	Nan::SetPrototypeMethod(tpl, "BoldOn", BoldOn);
	Nan::SetPrototypeMethod(tpl, "boldOn", BoldOn);

	Nan::SetPrototypeMethod(tpl, "GetBold", GetBold);
	Nan::SetPrototypeMethod(tpl, "getBold", GetBold);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFontFamily", GetFontFamily);
	Nan::SetPrototypeMethod(tpl, "getFontFamily", GetFontFamily);

	Nan::SetPrototypeMethod(tpl, "GetFontFamilyAsString", GetFontFamilyAsString);
	Nan::SetPrototypeMethod(tpl, "getFontFamilyAsString", GetFontFamilyAsString);

	Nan::SetPrototypeMethod(tpl, "GetFontFamilyFromString", GetFontFamilyFromString);
	Nan::SetPrototypeMethod(tpl, "getFontFamilyFromString", GetFontFamilyFromString);

	Nan::SetPrototypeMethod(tpl, "GetFontFamilyMinValue", GetFontFamilyMinValue);
	Nan::SetPrototypeMethod(tpl, "getFontFamilyMinValue", GetFontFamilyMinValue);

	Nan::SetPrototypeMethod(tpl, "GetFontFile", GetFontFile);
	Nan::SetPrototypeMethod(tpl, "getFontFile", GetFontFile);

	Nan::SetPrototypeMethod(tpl, "GetFontSize", GetFontSize);
	Nan::SetPrototypeMethod(tpl, "getFontSize", GetFontSize);

	Nan::SetPrototypeMethod(tpl, "GetFontSizeMaxValue", GetFontSizeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getFontSizeMaxValue", GetFontSizeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetFontSizeMinValue", GetFontSizeMinValue);
	Nan::SetPrototypeMethod(tpl, "getFontSizeMinValue", GetFontSizeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetItalic", GetItalic);
	Nan::SetPrototypeMethod(tpl, "getItalic", GetItalic);

	Nan::SetPrototypeMethod(tpl, "GetJustification", GetJustification);
	Nan::SetPrototypeMethod(tpl, "getJustification", GetJustification);

	Nan::SetPrototypeMethod(tpl, "GetJustificationAsString", GetJustificationAsString);
	Nan::SetPrototypeMethod(tpl, "getJustificationAsString", GetJustificationAsString);

	Nan::SetPrototypeMethod(tpl, "GetJustificationMaxValue", GetJustificationMaxValue);
	Nan::SetPrototypeMethod(tpl, "getJustificationMaxValue", GetJustificationMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetJustificationMinValue", GetJustificationMinValue);
	Nan::SetPrototypeMethod(tpl, "getJustificationMinValue", GetJustificationMinValue);

	Nan::SetPrototypeMethod(tpl, "GetLineOffset", GetLineOffset);
	Nan::SetPrototypeMethod(tpl, "getLineOffset", GetLineOffset);

	Nan::SetPrototypeMethod(tpl, "GetLineSpacing", GetLineSpacing);
	Nan::SetPrototypeMethod(tpl, "getLineSpacing", GetLineSpacing);

	Nan::SetPrototypeMethod(tpl, "GetOpacity", GetOpacity);
	Nan::SetPrototypeMethod(tpl, "getOpacity", GetOpacity);

	Nan::SetPrototypeMethod(tpl, "GetOrientation", GetOrientation);
	Nan::SetPrototypeMethod(tpl, "getOrientation", GetOrientation);

	Nan::SetPrototypeMethod(tpl, "GetShadow", GetShadow);
	Nan::SetPrototypeMethod(tpl, "getShadow", GetShadow);

	Nan::SetPrototypeMethod(tpl, "GetShadowColor", GetShadowColor);
	Nan::SetPrototypeMethod(tpl, "getShadowColor", GetShadowColor);

	Nan::SetPrototypeMethod(tpl, "GetVerticalJustification", GetVerticalJustification);
	Nan::SetPrototypeMethod(tpl, "getVerticalJustification", GetVerticalJustification);

	Nan::SetPrototypeMethod(tpl, "GetVerticalJustificationAsString", GetVerticalJustificationAsString);
	Nan::SetPrototypeMethod(tpl, "getVerticalJustificationAsString", GetVerticalJustificationAsString);

	Nan::SetPrototypeMethod(tpl, "GetVerticalJustificationMaxValue", GetVerticalJustificationMaxValue);
	Nan::SetPrototypeMethod(tpl, "getVerticalJustificationMaxValue", GetVerticalJustificationMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetVerticalJustificationMinValue", GetVerticalJustificationMinValue);
	Nan::SetPrototypeMethod(tpl, "getVerticalJustificationMinValue", GetVerticalJustificationMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "ItalicOff", ItalicOff);
	Nan::SetPrototypeMethod(tpl, "italicOff", ItalicOff);

	Nan::SetPrototypeMethod(tpl, "ItalicOn", ItalicOn);
	Nan::SetPrototypeMethod(tpl, "italicOn", ItalicOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBold", SetBold);
	Nan::SetPrototypeMethod(tpl, "setBold", SetBold);

	Nan::SetPrototypeMethod(tpl, "SetColor", SetColor);
	Nan::SetPrototypeMethod(tpl, "setColor", SetColor);

	Nan::SetPrototypeMethod(tpl, "SetFontFamily", SetFontFamily);
	Nan::SetPrototypeMethod(tpl, "setFontFamily", SetFontFamily);

	Nan::SetPrototypeMethod(tpl, "SetFontFamilyAsString", SetFontFamilyAsString);
	Nan::SetPrototypeMethod(tpl, "setFontFamilyAsString", SetFontFamilyAsString);

	Nan::SetPrototypeMethod(tpl, "SetFontFamilyToArial", SetFontFamilyToArial);
	Nan::SetPrototypeMethod(tpl, "setFontFamilyToArial", SetFontFamilyToArial);

	Nan::SetPrototypeMethod(tpl, "SetFontFamilyToCourier", SetFontFamilyToCourier);
	Nan::SetPrototypeMethod(tpl, "setFontFamilyToCourier", SetFontFamilyToCourier);

	Nan::SetPrototypeMethod(tpl, "SetFontFamilyToTimes", SetFontFamilyToTimes);
	Nan::SetPrototypeMethod(tpl, "setFontFamilyToTimes", SetFontFamilyToTimes);

	Nan::SetPrototypeMethod(tpl, "SetFontFile", SetFontFile);
	Nan::SetPrototypeMethod(tpl, "setFontFile", SetFontFile);

	Nan::SetPrototypeMethod(tpl, "SetFontSize", SetFontSize);
	Nan::SetPrototypeMethod(tpl, "setFontSize", SetFontSize);

	Nan::SetPrototypeMethod(tpl, "SetItalic", SetItalic);
	Nan::SetPrototypeMethod(tpl, "setItalic", SetItalic);

	Nan::SetPrototypeMethod(tpl, "SetJustification", SetJustification);
	Nan::SetPrototypeMethod(tpl, "setJustification", SetJustification);

	Nan::SetPrototypeMethod(tpl, "SetJustificationToCentered", SetJustificationToCentered);
	Nan::SetPrototypeMethod(tpl, "setJustificationToCentered", SetJustificationToCentered);

	Nan::SetPrototypeMethod(tpl, "SetJustificationToLeft", SetJustificationToLeft);
	Nan::SetPrototypeMethod(tpl, "setJustificationToLeft", SetJustificationToLeft);

	Nan::SetPrototypeMethod(tpl, "SetJustificationToRight", SetJustificationToRight);
	Nan::SetPrototypeMethod(tpl, "setJustificationToRight", SetJustificationToRight);

	Nan::SetPrototypeMethod(tpl, "SetLineOffset", SetLineOffset);
	Nan::SetPrototypeMethod(tpl, "setLineOffset", SetLineOffset);

	Nan::SetPrototypeMethod(tpl, "SetLineSpacing", SetLineSpacing);
	Nan::SetPrototypeMethod(tpl, "setLineSpacing", SetLineSpacing);

	Nan::SetPrototypeMethod(tpl, "SetOpacity", SetOpacity);
	Nan::SetPrototypeMethod(tpl, "setOpacity", SetOpacity);

	Nan::SetPrototypeMethod(tpl, "SetOrientation", SetOrientation);
	Nan::SetPrototypeMethod(tpl, "setOrientation", SetOrientation);

	Nan::SetPrototypeMethod(tpl, "SetShadow", SetShadow);
	Nan::SetPrototypeMethod(tpl, "setShadow", SetShadow);

	Nan::SetPrototypeMethod(tpl, "SetShadowOffset", SetShadowOffset);
	Nan::SetPrototypeMethod(tpl, "setShadowOffset", SetShadowOffset);

	Nan::SetPrototypeMethod(tpl, "SetVerticalJustification", SetVerticalJustification);
	Nan::SetPrototypeMethod(tpl, "setVerticalJustification", SetVerticalJustification);

	Nan::SetPrototypeMethod(tpl, "SetVerticalJustificationToBottom", SetVerticalJustificationToBottom);
	Nan::SetPrototypeMethod(tpl, "setVerticalJustificationToBottom", SetVerticalJustificationToBottom);

	Nan::SetPrototypeMethod(tpl, "SetVerticalJustificationToCentered", SetVerticalJustificationToCentered);
	Nan::SetPrototypeMethod(tpl, "setVerticalJustificationToCentered", SetVerticalJustificationToCentered);

	Nan::SetPrototypeMethod(tpl, "SetVerticalJustificationToTop", SetVerticalJustificationToTop);
	Nan::SetPrototypeMethod(tpl, "setVerticalJustificationToTop", SetVerticalJustificationToTop);

	Nan::SetPrototypeMethod(tpl, "ShadowOff", ShadowOff);
	Nan::SetPrototypeMethod(tpl, "shadowOff", ShadowOff);

	Nan::SetPrototypeMethod(tpl, "ShadowOn", ShadowOn);
	Nan::SetPrototypeMethod(tpl, "shadowOn", ShadowOn);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	ptpl.Reset( tpl );
}

void VtkTextPropertyWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTextProperty> native = vtkSmartPointer<vtkTextProperty>::New();
		VtkTextPropertyWrap* obj = new VtkTextPropertyWrap(native);
		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkTextPropertyWrap::BoldOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BoldOff();
}

void VtkTextPropertyWrap::BoldOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BoldOn();
}

void VtkTextPropertyWrap::GetBold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBold();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextPropertyWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTextPropertyWrap::GetFontFamily(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFontFamily();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextPropertyWrap::GetFontFamilyAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetFontFamilyAsString(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFontFamilyAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTextPropertyWrap::GetFontFamilyFromString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetFontFamilyFromString(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextPropertyWrap::GetFontFamilyMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFontFamilyMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextPropertyWrap::GetFontFile(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFontFile();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTextPropertyWrap::GetFontSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFontSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextPropertyWrap::GetFontSizeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFontSizeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextPropertyWrap::GetFontSizeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFontSizeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextPropertyWrap::GetItalic(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetItalic();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextPropertyWrap::GetJustification(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetJustification();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextPropertyWrap::GetJustificationAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetJustificationAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTextPropertyWrap::GetJustificationMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetJustificationMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextPropertyWrap::GetJustificationMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetJustificationMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextPropertyWrap::GetLineOffset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLineOffset();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextPropertyWrap::GetLineSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLineSpacing();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextPropertyWrap::GetOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOpacity();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextPropertyWrap::GetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOrientation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextPropertyWrap::GetShadow(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShadow();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextPropertyWrap::GetShadowColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0( v8::Local<v8::Array>::Cast( info[0]->ToObject() ) );
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetShadowColor(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextPropertyWrap::GetVerticalJustification(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVerticalJustification();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextPropertyWrap::GetVerticalJustificationAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVerticalJustificationAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTextPropertyWrap::GetVerticalJustificationMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVerticalJustificationMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextPropertyWrap::GetVerticalJustificationMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVerticalJustificationMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextPropertyWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsA(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextPropertyWrap::ItalicOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ItalicOff();
}

void VtkTextPropertyWrap::ItalicOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ItalicOn();
}

void VtkTextPropertyWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	vtkTextProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkTextPropertyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTextPropertyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTextPropertyWrap *w = new VtkTextPropertyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTextPropertyWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTextProperty * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkTextPropertyWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTextPropertyWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTextPropertyWrap *w = new VtkTextPropertyWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextPropertyWrap::SetBold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBold(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextPropertyWrap::SetColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0( v8::Local<v8::Array>::Cast( info[0]->ToObject() ) );
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetColor(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetColor(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextPropertyWrap::SetFontFamily(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFontFamily(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextPropertyWrap::SetFontFamilyAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFontFamilyAsString(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextPropertyWrap::SetFontFamilyToArial(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetFontFamilyToArial();
}

void VtkTextPropertyWrap::SetFontFamilyToCourier(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetFontFamilyToCourier();
}

void VtkTextPropertyWrap::SetFontFamilyToTimes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetFontFamilyToTimes();
}

void VtkTextPropertyWrap::SetFontFile(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFontFile(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextPropertyWrap::SetFontSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFontSize(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextPropertyWrap::SetItalic(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetItalic(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextPropertyWrap::SetJustification(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetJustification(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextPropertyWrap::SetJustificationToCentered(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetJustificationToCentered();
}

void VtkTextPropertyWrap::SetJustificationToLeft(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetJustificationToLeft();
}

void VtkTextPropertyWrap::SetJustificationToRight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetJustificationToRight();
}

void VtkTextPropertyWrap::SetLineOffset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLineOffset(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextPropertyWrap::SetLineSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLineSpacing(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextPropertyWrap::SetOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOpacity(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextPropertyWrap::SetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOrientation(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextPropertyWrap::SetShadow(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetShadow(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextPropertyWrap::SetShadowOffset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0( v8::Local<v8::Array>::Cast( info[0]->ToObject() ) );
		int b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
		{
			if( !a0->Get(i)->IsInt32() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->Int32Value();
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetShadowOffset(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetShadowOffset(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextPropertyWrap::SetVerticalJustification(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVerticalJustification(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextPropertyWrap::SetVerticalJustificationToBottom(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetVerticalJustificationToBottom();
}

void VtkTextPropertyWrap::SetVerticalJustificationToCentered(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetVerticalJustificationToCentered();
}

void VtkTextPropertyWrap::SetVerticalJustificationToTop(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetVerticalJustificationToTop();
}

void VtkTextPropertyWrap::ShadowOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ShadowOff();
}

void VtkTextPropertyWrap::ShadowOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ShadowOn();
}

void VtkTextPropertyWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info.Holder());
	vtkTextProperty *native = (vtkTextProperty *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTextPropertyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTextPropertyWrap *a0 = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ShallowCopy(
			(vtkTextProperty *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

