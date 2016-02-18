/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkTDxInteractorStyleSettingsWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTDxInteractorStyleSettingsWrap::ptpl;

VtkTDxInteractorStyleSettingsWrap::VtkTDxInteractorStyleSettingsWrap()
{ }

VtkTDxInteractorStyleSettingsWrap::VtkTDxInteractorStyleSettingsWrap(vtkSmartPointer<vtkTDxInteractorStyleSettings> _native)
{ native = _native; }

VtkTDxInteractorStyleSettingsWrap::~VtkTDxInteractorStyleSettingsWrap()
{ }

void VtkTDxInteractorStyleSettingsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTDxInteractorStyleSettings").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TDxInteractorStyleSettings").ToLocalChecked(), ConstructorGetter);
}

void VtkTDxInteractorStyleSettingsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTDxInteractorStyleSettingsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTDxInteractorStyleSettingsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetAngleSensitivity", GetAngleSensitivity);
	Nan::SetPrototypeMethod(tpl, "getAngleSensitivity", GetAngleSensitivity);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetTranslationXSensitivity", GetTranslationXSensitivity);
	Nan::SetPrototypeMethod(tpl, "getTranslationXSensitivity", GetTranslationXSensitivity);

	Nan::SetPrototypeMethod(tpl, "GetTranslationYSensitivity", GetTranslationYSensitivity);
	Nan::SetPrototypeMethod(tpl, "getTranslationYSensitivity", GetTranslationYSensitivity);

	Nan::SetPrototypeMethod(tpl, "GetTranslationZSensitivity", GetTranslationZSensitivity);
	Nan::SetPrototypeMethod(tpl, "getTranslationZSensitivity", GetTranslationZSensitivity);

	Nan::SetPrototypeMethod(tpl, "GetUseRotationX", GetUseRotationX);
	Nan::SetPrototypeMethod(tpl, "getUseRotationX", GetUseRotationX);

	Nan::SetPrototypeMethod(tpl, "GetUseRotationY", GetUseRotationY);
	Nan::SetPrototypeMethod(tpl, "getUseRotationY", GetUseRotationY);

	Nan::SetPrototypeMethod(tpl, "GetUseRotationZ", GetUseRotationZ);
	Nan::SetPrototypeMethod(tpl, "getUseRotationZ", GetUseRotationZ);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAngleSensitivity", SetAngleSensitivity);
	Nan::SetPrototypeMethod(tpl, "setAngleSensitivity", SetAngleSensitivity);

	Nan::SetPrototypeMethod(tpl, "SetTranslationXSensitivity", SetTranslationXSensitivity);
	Nan::SetPrototypeMethod(tpl, "setTranslationXSensitivity", SetTranslationXSensitivity);

	Nan::SetPrototypeMethod(tpl, "SetTranslationYSensitivity", SetTranslationYSensitivity);
	Nan::SetPrototypeMethod(tpl, "setTranslationYSensitivity", SetTranslationYSensitivity);

	Nan::SetPrototypeMethod(tpl, "SetTranslationZSensitivity", SetTranslationZSensitivity);
	Nan::SetPrototypeMethod(tpl, "setTranslationZSensitivity", SetTranslationZSensitivity);

	Nan::SetPrototypeMethod(tpl, "SetUseRotationX", SetUseRotationX);
	Nan::SetPrototypeMethod(tpl, "setUseRotationX", SetUseRotationX);

	Nan::SetPrototypeMethod(tpl, "SetUseRotationY", SetUseRotationY);
	Nan::SetPrototypeMethod(tpl, "setUseRotationY", SetUseRotationY);

	Nan::SetPrototypeMethod(tpl, "SetUseRotationZ", SetUseRotationZ);
	Nan::SetPrototypeMethod(tpl, "setUseRotationZ", SetUseRotationZ);

#ifdef VTK_NODE_PLUS_VTKTDXINTERACTORSTYLESETTINGSWRAP_INITPTPL
	VTK_NODE_PLUS_VTKTDXINTERACTORSTYLESETTINGSWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkTDxInteractorStyleSettingsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTDxInteractorStyleSettings> native = vtkSmartPointer<vtkTDxInteractorStyleSettings>::New();
		VtkTDxInteractorStyleSettingsWrap* obj = new VtkTDxInteractorStyleSettingsWrap(native);
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

void VtkTDxInteractorStyleSettingsWrap::GetAngleSensitivity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTDxInteractorStyleSettingsWrap *wrapper = ObjectWrap::Unwrap<VtkTDxInteractorStyleSettingsWrap>(info.Holder());
	vtkTDxInteractorStyleSettings *native = (vtkTDxInteractorStyleSettings *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAngleSensitivity();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTDxInteractorStyleSettingsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTDxInteractorStyleSettingsWrap *wrapper = ObjectWrap::Unwrap<VtkTDxInteractorStyleSettingsWrap>(info.Holder());
	vtkTDxInteractorStyleSettings *native = (vtkTDxInteractorStyleSettings *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTDxInteractorStyleSettingsWrap::GetTranslationXSensitivity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTDxInteractorStyleSettingsWrap *wrapper = ObjectWrap::Unwrap<VtkTDxInteractorStyleSettingsWrap>(info.Holder());
	vtkTDxInteractorStyleSettings *native = (vtkTDxInteractorStyleSettings *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTranslationXSensitivity();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTDxInteractorStyleSettingsWrap::GetTranslationYSensitivity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTDxInteractorStyleSettingsWrap *wrapper = ObjectWrap::Unwrap<VtkTDxInteractorStyleSettingsWrap>(info.Holder());
	vtkTDxInteractorStyleSettings *native = (vtkTDxInteractorStyleSettings *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTranslationYSensitivity();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTDxInteractorStyleSettingsWrap::GetTranslationZSensitivity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTDxInteractorStyleSettingsWrap *wrapper = ObjectWrap::Unwrap<VtkTDxInteractorStyleSettingsWrap>(info.Holder());
	vtkTDxInteractorStyleSettings *native = (vtkTDxInteractorStyleSettings *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTranslationZSensitivity();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTDxInteractorStyleSettingsWrap::GetUseRotationX(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTDxInteractorStyleSettingsWrap *wrapper = ObjectWrap::Unwrap<VtkTDxInteractorStyleSettingsWrap>(info.Holder());
	vtkTDxInteractorStyleSettings *native = (vtkTDxInteractorStyleSettings *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseRotationX();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTDxInteractorStyleSettingsWrap::GetUseRotationY(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTDxInteractorStyleSettingsWrap *wrapper = ObjectWrap::Unwrap<VtkTDxInteractorStyleSettingsWrap>(info.Holder());
	vtkTDxInteractorStyleSettings *native = (vtkTDxInteractorStyleSettings *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseRotationY();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTDxInteractorStyleSettingsWrap::GetUseRotationZ(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTDxInteractorStyleSettingsWrap *wrapper = ObjectWrap::Unwrap<VtkTDxInteractorStyleSettingsWrap>(info.Holder());
	vtkTDxInteractorStyleSettings *native = (vtkTDxInteractorStyleSettings *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseRotationZ();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTDxInteractorStyleSettingsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTDxInteractorStyleSettingsWrap *wrapper = ObjectWrap::Unwrap<VtkTDxInteractorStyleSettingsWrap>(info.Holder());
	vtkTDxInteractorStyleSettings *native = (vtkTDxInteractorStyleSettings *)wrapper->native.GetPointer();
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

void VtkTDxInteractorStyleSettingsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTDxInteractorStyleSettingsWrap *wrapper = ObjectWrap::Unwrap<VtkTDxInteractorStyleSettingsWrap>(info.Holder());
	vtkTDxInteractorStyleSettings *native = (vtkTDxInteractorStyleSettings *)wrapper->native.GetPointer();
	vtkTDxInteractorStyleSettings * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkTDxInteractorStyleSettingsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTDxInteractorStyleSettingsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTDxInteractorStyleSettingsWrap *w = new VtkTDxInteractorStyleSettingsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTDxInteractorStyleSettingsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTDxInteractorStyleSettingsWrap *wrapper = ObjectWrap::Unwrap<VtkTDxInteractorStyleSettingsWrap>(info.Holder());
	vtkTDxInteractorStyleSettings *native = (vtkTDxInteractorStyleSettings *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTDxInteractorStyleSettings * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkTDxInteractorStyleSettingsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTDxInteractorStyleSettingsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTDxInteractorStyleSettingsWrap *w = new VtkTDxInteractorStyleSettingsWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTDxInteractorStyleSettingsWrap::SetAngleSensitivity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTDxInteractorStyleSettingsWrap *wrapper = ObjectWrap::Unwrap<VtkTDxInteractorStyleSettingsWrap>(info.Holder());
	vtkTDxInteractorStyleSettings *native = (vtkTDxInteractorStyleSettings *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAngleSensitivity(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTDxInteractorStyleSettingsWrap::SetTranslationXSensitivity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTDxInteractorStyleSettingsWrap *wrapper = ObjectWrap::Unwrap<VtkTDxInteractorStyleSettingsWrap>(info.Holder());
	vtkTDxInteractorStyleSettings *native = (vtkTDxInteractorStyleSettings *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTranslationXSensitivity(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTDxInteractorStyleSettingsWrap::SetTranslationYSensitivity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTDxInteractorStyleSettingsWrap *wrapper = ObjectWrap::Unwrap<VtkTDxInteractorStyleSettingsWrap>(info.Holder());
	vtkTDxInteractorStyleSettings *native = (vtkTDxInteractorStyleSettings *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTranslationYSensitivity(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTDxInteractorStyleSettingsWrap::SetTranslationZSensitivity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTDxInteractorStyleSettingsWrap *wrapper = ObjectWrap::Unwrap<VtkTDxInteractorStyleSettingsWrap>(info.Holder());
	vtkTDxInteractorStyleSettings *native = (vtkTDxInteractorStyleSettings *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTranslationZSensitivity(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTDxInteractorStyleSettingsWrap::SetUseRotationX(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTDxInteractorStyleSettingsWrap *wrapper = ObjectWrap::Unwrap<VtkTDxInteractorStyleSettingsWrap>(info.Holder());
	vtkTDxInteractorStyleSettings *native = (vtkTDxInteractorStyleSettings *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseRotationX(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTDxInteractorStyleSettingsWrap::SetUseRotationY(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTDxInteractorStyleSettingsWrap *wrapper = ObjectWrap::Unwrap<VtkTDxInteractorStyleSettingsWrap>(info.Holder());
	vtkTDxInteractorStyleSettings *native = (vtkTDxInteractorStyleSettings *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseRotationY(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTDxInteractorStyleSettingsWrap::SetUseRotationZ(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTDxInteractorStyleSettingsWrap *wrapper = ObjectWrap::Unwrap<VtkTDxInteractorStyleSettingsWrap>(info.Holder());
	vtkTDxInteractorStyleSettings *native = (vtkTDxInteractorStyleSettings *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseRotationZ(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

