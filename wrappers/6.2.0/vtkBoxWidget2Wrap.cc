/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAbstractWidgetWrap.h"
#include "vtkBoxWidget2Wrap.h"
#include "vtkObjectWrap.h"
#include "vtkBoxRepresentationWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkBoxWidget2Wrap::ptpl;

VtkBoxWidget2Wrap::VtkBoxWidget2Wrap()
{ }

VtkBoxWidget2Wrap::VtkBoxWidget2Wrap(vtkSmartPointer<vtkBoxWidget2> _native)
{ native = _native; }

VtkBoxWidget2Wrap::~VtkBoxWidget2Wrap()
{ }

void VtkBoxWidget2Wrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkBoxWidget2").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("BoxWidget2").ToLocalChecked(), ConstructorGetter);
}

void VtkBoxWidget2Wrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkBoxWidget2Wrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractWidgetWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractWidgetWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkBoxWidget2Wrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CreateDefaultRepresentation", CreateDefaultRepresentation);
	Nan::SetPrototypeMethod(tpl, "createDefaultRepresentation", CreateDefaultRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetMoveFacesEnabled", GetMoveFacesEnabled);
	Nan::SetPrototypeMethod(tpl, "getMoveFacesEnabled", GetMoveFacesEnabled);

	Nan::SetPrototypeMethod(tpl, "GetRotationEnabled", GetRotationEnabled);
	Nan::SetPrototypeMethod(tpl, "getRotationEnabled", GetRotationEnabled);

	Nan::SetPrototypeMethod(tpl, "GetScalingEnabled", GetScalingEnabled);
	Nan::SetPrototypeMethod(tpl, "getScalingEnabled", GetScalingEnabled);

	Nan::SetPrototypeMethod(tpl, "GetTranslationEnabled", GetTranslationEnabled);
	Nan::SetPrototypeMethod(tpl, "getTranslationEnabled", GetTranslationEnabled);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "MoveFacesEnabledOff", MoveFacesEnabledOff);
	Nan::SetPrototypeMethod(tpl, "moveFacesEnabledOff", MoveFacesEnabledOff);

	Nan::SetPrototypeMethod(tpl, "MoveFacesEnabledOn", MoveFacesEnabledOn);
	Nan::SetPrototypeMethod(tpl, "moveFacesEnabledOn", MoveFacesEnabledOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RotationEnabledOff", RotationEnabledOff);
	Nan::SetPrototypeMethod(tpl, "rotationEnabledOff", RotationEnabledOff);

	Nan::SetPrototypeMethod(tpl, "RotationEnabledOn", RotationEnabledOn);
	Nan::SetPrototypeMethod(tpl, "rotationEnabledOn", RotationEnabledOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "ScalingEnabledOff", ScalingEnabledOff);
	Nan::SetPrototypeMethod(tpl, "scalingEnabledOff", ScalingEnabledOff);

	Nan::SetPrototypeMethod(tpl, "ScalingEnabledOn", ScalingEnabledOn);
	Nan::SetPrototypeMethod(tpl, "scalingEnabledOn", ScalingEnabledOn);

	Nan::SetPrototypeMethod(tpl, "SetMoveFacesEnabled", SetMoveFacesEnabled);
	Nan::SetPrototypeMethod(tpl, "setMoveFacesEnabled", SetMoveFacesEnabled);

	Nan::SetPrototypeMethod(tpl, "SetRepresentation", SetRepresentation);
	Nan::SetPrototypeMethod(tpl, "setRepresentation", SetRepresentation);

	Nan::SetPrototypeMethod(tpl, "SetRotationEnabled", SetRotationEnabled);
	Nan::SetPrototypeMethod(tpl, "setRotationEnabled", SetRotationEnabled);

	Nan::SetPrototypeMethod(tpl, "SetScalingEnabled", SetScalingEnabled);
	Nan::SetPrototypeMethod(tpl, "setScalingEnabled", SetScalingEnabled);

	Nan::SetPrototypeMethod(tpl, "SetTranslationEnabled", SetTranslationEnabled);
	Nan::SetPrototypeMethod(tpl, "setTranslationEnabled", SetTranslationEnabled);

	Nan::SetPrototypeMethod(tpl, "TranslationEnabledOff", TranslationEnabledOff);
	Nan::SetPrototypeMethod(tpl, "translationEnabledOff", TranslationEnabledOff);

	Nan::SetPrototypeMethod(tpl, "TranslationEnabledOn", TranslationEnabledOn);
	Nan::SetPrototypeMethod(tpl, "translationEnabledOn", TranslationEnabledOn);

	ptpl.Reset( tpl );
}

void VtkBoxWidget2Wrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkBoxWidget2> native = vtkSmartPointer<vtkBoxWidget2>::New();
		VtkBoxWidget2Wrap* obj = new VtkBoxWidget2Wrap(native);
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

void VtkBoxWidget2Wrap::CreateDefaultRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidget2Wrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidget2Wrap>(info.Holder());
	vtkBoxWidget2 *native = (vtkBoxWidget2 *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultRepresentation();
}

void VtkBoxWidget2Wrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidget2Wrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidget2Wrap>(info.Holder());
	vtkBoxWidget2 *native = (vtkBoxWidget2 *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBoxWidget2Wrap::GetMoveFacesEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidget2Wrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidget2Wrap>(info.Holder());
	vtkBoxWidget2 *native = (vtkBoxWidget2 *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMoveFacesEnabled();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBoxWidget2Wrap::GetRotationEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidget2Wrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidget2Wrap>(info.Holder());
	vtkBoxWidget2 *native = (vtkBoxWidget2 *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRotationEnabled();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBoxWidget2Wrap::GetScalingEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidget2Wrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidget2Wrap>(info.Holder());
	vtkBoxWidget2 *native = (vtkBoxWidget2 *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalingEnabled();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBoxWidget2Wrap::GetTranslationEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidget2Wrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidget2Wrap>(info.Holder());
	vtkBoxWidget2 *native = (vtkBoxWidget2 *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTranslationEnabled();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBoxWidget2Wrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidget2Wrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidget2Wrap>(info.Holder());
	vtkBoxWidget2 *native = (vtkBoxWidget2 *)wrapper->native.GetPointer();
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

void VtkBoxWidget2Wrap::MoveFacesEnabledOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidget2Wrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidget2Wrap>(info.Holder());
	vtkBoxWidget2 *native = (vtkBoxWidget2 *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MoveFacesEnabledOff();
}

void VtkBoxWidget2Wrap::MoveFacesEnabledOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidget2Wrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidget2Wrap>(info.Holder());
	vtkBoxWidget2 *native = (vtkBoxWidget2 *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MoveFacesEnabledOn();
}

void VtkBoxWidget2Wrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidget2Wrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidget2Wrap>(info.Holder());
	vtkBoxWidget2 *native = (vtkBoxWidget2 *)wrapper->native.GetPointer();
	vtkBoxWidget2 * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkBoxWidget2Wrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkBoxWidget2Wrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBoxWidget2Wrap *w = new VtkBoxWidget2Wrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBoxWidget2Wrap::RotationEnabledOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidget2Wrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidget2Wrap>(info.Holder());
	vtkBoxWidget2 *native = (vtkBoxWidget2 *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RotationEnabledOff();
}

void VtkBoxWidget2Wrap::RotationEnabledOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidget2Wrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidget2Wrap>(info.Holder());
	vtkBoxWidget2 *native = (vtkBoxWidget2 *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RotationEnabledOn();
}

void VtkBoxWidget2Wrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidget2Wrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidget2Wrap>(info.Holder());
	vtkBoxWidget2 *native = (vtkBoxWidget2 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkBoxWidget2 * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkBoxWidget2Wrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkBoxWidget2Wrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkBoxWidget2Wrap *w = new VtkBoxWidget2Wrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBoxWidget2Wrap::ScalingEnabledOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidget2Wrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidget2Wrap>(info.Holder());
	vtkBoxWidget2 *native = (vtkBoxWidget2 *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ScalingEnabledOff();
}

void VtkBoxWidget2Wrap::ScalingEnabledOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidget2Wrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidget2Wrap>(info.Holder());
	vtkBoxWidget2 *native = (vtkBoxWidget2 *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ScalingEnabledOn();
}

void VtkBoxWidget2Wrap::SetMoveFacesEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidget2Wrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidget2Wrap>(info.Holder());
	vtkBoxWidget2 *native = (vtkBoxWidget2 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMoveFacesEnabled(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBoxWidget2Wrap::SetRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidget2Wrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidget2Wrap>(info.Holder());
	vtkBoxWidget2 *native = (vtkBoxWidget2 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkBoxRepresentationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkBoxRepresentationWrap *a0 = ObjectWrap::Unwrap<VtkBoxRepresentationWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRepresentation(
			(vtkBoxRepresentation *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBoxWidget2Wrap::SetRotationEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidget2Wrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidget2Wrap>(info.Holder());
	vtkBoxWidget2 *native = (vtkBoxWidget2 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRotationEnabled(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBoxWidget2Wrap::SetScalingEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidget2Wrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidget2Wrap>(info.Holder());
	vtkBoxWidget2 *native = (vtkBoxWidget2 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScalingEnabled(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBoxWidget2Wrap::SetTranslationEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidget2Wrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidget2Wrap>(info.Holder());
	vtkBoxWidget2 *native = (vtkBoxWidget2 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTranslationEnabled(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBoxWidget2Wrap::TranslationEnabledOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidget2Wrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidget2Wrap>(info.Holder());
	vtkBoxWidget2 *native = (vtkBoxWidget2 *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TranslationEnabledOff();
}

void VtkBoxWidget2Wrap::TranslationEnabledOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidget2Wrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidget2Wrap>(info.Holder());
	vtkBoxWidget2 *native = (vtkBoxWidget2 *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TranslationEnabledOn();
}

