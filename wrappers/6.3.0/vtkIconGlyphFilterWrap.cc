/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkIconGlyphFilterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkIconGlyphFilterWrap::ptpl;

VtkIconGlyphFilterWrap::VtkIconGlyphFilterWrap()
{ }

VtkIconGlyphFilterWrap::VtkIconGlyphFilterWrap(vtkSmartPointer<vtkIconGlyphFilter> _native)
{ native = _native; }

VtkIconGlyphFilterWrap::~VtkIconGlyphFilterWrap()
{ }

void VtkIconGlyphFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkIconGlyphFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("IconGlyphFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkIconGlyphFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkIconGlyphFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkIconGlyphFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetGravity", GetGravity);
	Nan::SetPrototypeMethod(tpl, "getGravity", GetGravity);

	Nan::SetPrototypeMethod(tpl, "GetIconScaling", GetIconScaling);
	Nan::SetPrototypeMethod(tpl, "getIconScaling", GetIconScaling);

	Nan::SetPrototypeMethod(tpl, "GetPassScalars", GetPassScalars);
	Nan::SetPrototypeMethod(tpl, "getPassScalars", GetPassScalars);

	Nan::SetPrototypeMethod(tpl, "GetUseIconSize", GetUseIconSize);
	Nan::SetPrototypeMethod(tpl, "getUseIconSize", GetUseIconSize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PassScalarsOff", PassScalarsOff);
	Nan::SetPrototypeMethod(tpl, "passScalarsOff", PassScalarsOff);

	Nan::SetPrototypeMethod(tpl, "PassScalarsOn", PassScalarsOn);
	Nan::SetPrototypeMethod(tpl, "passScalarsOn", PassScalarsOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDisplaySize", SetDisplaySize);
	Nan::SetPrototypeMethod(tpl, "setDisplaySize", SetDisplaySize);

	Nan::SetPrototypeMethod(tpl, "SetGravity", SetGravity);
	Nan::SetPrototypeMethod(tpl, "setGravity", SetGravity);

	Nan::SetPrototypeMethod(tpl, "SetGravityToBottomCenter", SetGravityToBottomCenter);
	Nan::SetPrototypeMethod(tpl, "setGravityToBottomCenter", SetGravityToBottomCenter);

	Nan::SetPrototypeMethod(tpl, "SetGravityToBottomLeft", SetGravityToBottomLeft);
	Nan::SetPrototypeMethod(tpl, "setGravityToBottomLeft", SetGravityToBottomLeft);

	Nan::SetPrototypeMethod(tpl, "SetGravityToBottomRight", SetGravityToBottomRight);
	Nan::SetPrototypeMethod(tpl, "setGravityToBottomRight", SetGravityToBottomRight);

	Nan::SetPrototypeMethod(tpl, "SetGravityToCenterCenter", SetGravityToCenterCenter);
	Nan::SetPrototypeMethod(tpl, "setGravityToCenterCenter", SetGravityToCenterCenter);

	Nan::SetPrototypeMethod(tpl, "SetGravityToCenterLeft", SetGravityToCenterLeft);
	Nan::SetPrototypeMethod(tpl, "setGravityToCenterLeft", SetGravityToCenterLeft);

	Nan::SetPrototypeMethod(tpl, "SetGravityToCenterRight", SetGravityToCenterRight);
	Nan::SetPrototypeMethod(tpl, "setGravityToCenterRight", SetGravityToCenterRight);

	Nan::SetPrototypeMethod(tpl, "SetGravityToTopCenter", SetGravityToTopCenter);
	Nan::SetPrototypeMethod(tpl, "setGravityToTopCenter", SetGravityToTopCenter);

	Nan::SetPrototypeMethod(tpl, "SetGravityToTopLeft", SetGravityToTopLeft);
	Nan::SetPrototypeMethod(tpl, "setGravityToTopLeft", SetGravityToTopLeft);

	Nan::SetPrototypeMethod(tpl, "SetGravityToTopRight", SetGravityToTopRight);
	Nan::SetPrototypeMethod(tpl, "setGravityToTopRight", SetGravityToTopRight);

	Nan::SetPrototypeMethod(tpl, "SetIconScaling", SetIconScaling);
	Nan::SetPrototypeMethod(tpl, "setIconScaling", SetIconScaling);

	Nan::SetPrototypeMethod(tpl, "SetIconScalingToScalingArray", SetIconScalingToScalingArray);
	Nan::SetPrototypeMethod(tpl, "setIconScalingToScalingArray", SetIconScalingToScalingArray);

	Nan::SetPrototypeMethod(tpl, "SetIconScalingToScalingOff", SetIconScalingToScalingOff);
	Nan::SetPrototypeMethod(tpl, "setIconScalingToScalingOff", SetIconScalingToScalingOff);

	Nan::SetPrototypeMethod(tpl, "SetIconSheetSize", SetIconSheetSize);
	Nan::SetPrototypeMethod(tpl, "setIconSheetSize", SetIconSheetSize);

	Nan::SetPrototypeMethod(tpl, "SetIconSize", SetIconSize);
	Nan::SetPrototypeMethod(tpl, "setIconSize", SetIconSize);

	Nan::SetPrototypeMethod(tpl, "SetOffset", SetOffset);
	Nan::SetPrototypeMethod(tpl, "setOffset", SetOffset);

	Nan::SetPrototypeMethod(tpl, "SetPassScalars", SetPassScalars);
	Nan::SetPrototypeMethod(tpl, "setPassScalars", SetPassScalars);

	Nan::SetPrototypeMethod(tpl, "SetUseIconSize", SetUseIconSize);
	Nan::SetPrototypeMethod(tpl, "setUseIconSize", SetUseIconSize);

	Nan::SetPrototypeMethod(tpl, "UseIconSizeOff", UseIconSizeOff);
	Nan::SetPrototypeMethod(tpl, "useIconSizeOff", UseIconSizeOff);

	Nan::SetPrototypeMethod(tpl, "UseIconSizeOn", UseIconSizeOn);
	Nan::SetPrototypeMethod(tpl, "useIconSizeOn", UseIconSizeOn);

	ptpl.Reset( tpl );
}

void VtkIconGlyphFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkIconGlyphFilter> native = vtkSmartPointer<vtkIconGlyphFilter>::New();
		VtkIconGlyphFilterWrap* obj = new VtkIconGlyphFilterWrap(native);
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

void VtkIconGlyphFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIconGlyphFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIconGlyphFilterWrap>(info.Holder());
	vtkIconGlyphFilter *native = (vtkIconGlyphFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkIconGlyphFilterWrap::GetGravity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIconGlyphFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIconGlyphFilterWrap>(info.Holder());
	vtkIconGlyphFilter *native = (vtkIconGlyphFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGravity();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkIconGlyphFilterWrap::GetIconScaling(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIconGlyphFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIconGlyphFilterWrap>(info.Holder());
	vtkIconGlyphFilter *native = (vtkIconGlyphFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIconScaling();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkIconGlyphFilterWrap::GetPassScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIconGlyphFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIconGlyphFilterWrap>(info.Holder());
	vtkIconGlyphFilter *native = (vtkIconGlyphFilter *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPassScalars();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkIconGlyphFilterWrap::GetUseIconSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIconGlyphFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIconGlyphFilterWrap>(info.Holder());
	vtkIconGlyphFilter *native = (vtkIconGlyphFilter *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseIconSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkIconGlyphFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIconGlyphFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIconGlyphFilterWrap>(info.Holder());
	vtkIconGlyphFilter *native = (vtkIconGlyphFilter *)wrapper->native.GetPointer();
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

void VtkIconGlyphFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIconGlyphFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIconGlyphFilterWrap>(info.Holder());
	vtkIconGlyphFilter *native = (vtkIconGlyphFilter *)wrapper->native.GetPointer();
	vtkIconGlyphFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkIconGlyphFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkIconGlyphFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIconGlyphFilterWrap *w = new VtkIconGlyphFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkIconGlyphFilterWrap::PassScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIconGlyphFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIconGlyphFilterWrap>(info.Holder());
	vtkIconGlyphFilter *native = (vtkIconGlyphFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassScalarsOff();
}

void VtkIconGlyphFilterWrap::PassScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIconGlyphFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIconGlyphFilterWrap>(info.Holder());
	vtkIconGlyphFilter *native = (vtkIconGlyphFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassScalarsOn();
}

void VtkIconGlyphFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIconGlyphFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIconGlyphFilterWrap>(info.Holder());
	vtkIconGlyphFilter *native = (vtkIconGlyphFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkIconGlyphFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkIconGlyphFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkIconGlyphFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkIconGlyphFilterWrap *w = new VtkIconGlyphFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkIconGlyphFilterWrap::SetDisplaySize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIconGlyphFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIconGlyphFilterWrap>(info.Holder());
	vtkIconGlyphFilter *native = (vtkIconGlyphFilter *)wrapper->native.GetPointer();
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
		native->SetDisplaySize(
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
			native->SetDisplaySize(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkIconGlyphFilterWrap::SetGravity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIconGlyphFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIconGlyphFilterWrap>(info.Holder());
	vtkIconGlyphFilter *native = (vtkIconGlyphFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGravity(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkIconGlyphFilterWrap::SetGravityToBottomCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIconGlyphFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIconGlyphFilterWrap>(info.Holder());
	vtkIconGlyphFilter *native = (vtkIconGlyphFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetGravityToBottomCenter();
}

void VtkIconGlyphFilterWrap::SetGravityToBottomLeft(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIconGlyphFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIconGlyphFilterWrap>(info.Holder());
	vtkIconGlyphFilter *native = (vtkIconGlyphFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetGravityToBottomLeft();
}

void VtkIconGlyphFilterWrap::SetGravityToBottomRight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIconGlyphFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIconGlyphFilterWrap>(info.Holder());
	vtkIconGlyphFilter *native = (vtkIconGlyphFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetGravityToBottomRight();
}

void VtkIconGlyphFilterWrap::SetGravityToCenterCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIconGlyphFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIconGlyphFilterWrap>(info.Holder());
	vtkIconGlyphFilter *native = (vtkIconGlyphFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetGravityToCenterCenter();
}

void VtkIconGlyphFilterWrap::SetGravityToCenterLeft(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIconGlyphFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIconGlyphFilterWrap>(info.Holder());
	vtkIconGlyphFilter *native = (vtkIconGlyphFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetGravityToCenterLeft();
}

void VtkIconGlyphFilterWrap::SetGravityToCenterRight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIconGlyphFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIconGlyphFilterWrap>(info.Holder());
	vtkIconGlyphFilter *native = (vtkIconGlyphFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetGravityToCenterRight();
}

void VtkIconGlyphFilterWrap::SetGravityToTopCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIconGlyphFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIconGlyphFilterWrap>(info.Holder());
	vtkIconGlyphFilter *native = (vtkIconGlyphFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetGravityToTopCenter();
}

void VtkIconGlyphFilterWrap::SetGravityToTopLeft(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIconGlyphFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIconGlyphFilterWrap>(info.Holder());
	vtkIconGlyphFilter *native = (vtkIconGlyphFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetGravityToTopLeft();
}

void VtkIconGlyphFilterWrap::SetGravityToTopRight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIconGlyphFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIconGlyphFilterWrap>(info.Holder());
	vtkIconGlyphFilter *native = (vtkIconGlyphFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetGravityToTopRight();
}

void VtkIconGlyphFilterWrap::SetIconScaling(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIconGlyphFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIconGlyphFilterWrap>(info.Holder());
	vtkIconGlyphFilter *native = (vtkIconGlyphFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetIconScaling(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkIconGlyphFilterWrap::SetIconScalingToScalingArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIconGlyphFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIconGlyphFilterWrap>(info.Holder());
	vtkIconGlyphFilter *native = (vtkIconGlyphFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetIconScalingToScalingArray();
}

void VtkIconGlyphFilterWrap::SetIconScalingToScalingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIconGlyphFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIconGlyphFilterWrap>(info.Holder());
	vtkIconGlyphFilter *native = (vtkIconGlyphFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetIconScalingToScalingOff();
}

void VtkIconGlyphFilterWrap::SetIconSheetSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIconGlyphFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIconGlyphFilterWrap>(info.Holder());
	vtkIconGlyphFilter *native = (vtkIconGlyphFilter *)wrapper->native.GetPointer();
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
		native->SetIconSheetSize(
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
			native->SetIconSheetSize(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkIconGlyphFilterWrap::SetIconSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIconGlyphFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIconGlyphFilterWrap>(info.Holder());
	vtkIconGlyphFilter *native = (vtkIconGlyphFilter *)wrapper->native.GetPointer();
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
		native->SetIconSize(
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
			native->SetIconSize(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkIconGlyphFilterWrap::SetOffset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIconGlyphFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIconGlyphFilterWrap>(info.Holder());
	vtkIconGlyphFilter *native = (vtkIconGlyphFilter *)wrapper->native.GetPointer();
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
		native->SetOffset(
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
			native->SetOffset(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkIconGlyphFilterWrap::SetPassScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIconGlyphFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIconGlyphFilterWrap>(info.Holder());
	vtkIconGlyphFilter *native = (vtkIconGlyphFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPassScalars(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkIconGlyphFilterWrap::SetUseIconSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIconGlyphFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIconGlyphFilterWrap>(info.Holder());
	vtkIconGlyphFilter *native = (vtkIconGlyphFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseIconSize(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkIconGlyphFilterWrap::UseIconSizeOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIconGlyphFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIconGlyphFilterWrap>(info.Holder());
	vtkIconGlyphFilter *native = (vtkIconGlyphFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseIconSizeOff();
}

void VtkIconGlyphFilterWrap::UseIconSizeOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIconGlyphFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIconGlyphFilterWrap>(info.Holder());
	vtkIconGlyphFilter *native = (vtkIconGlyphFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseIconSizeOn();
}

