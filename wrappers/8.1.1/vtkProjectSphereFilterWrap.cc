/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPointSetAlgorithmWrap.h"
#include "vtkProjectSphereFilterWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkProjectSphereFilterWrap::ptpl;

VtkProjectSphereFilterWrap::VtkProjectSphereFilterWrap()
{ }

VtkProjectSphereFilterWrap::VtkProjectSphereFilterWrap(vtkSmartPointer<vtkProjectSphereFilter> _native)
{ native = _native; }

VtkProjectSphereFilterWrap::~VtkProjectSphereFilterWrap()
{ }

void VtkProjectSphereFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkProjectSphereFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ProjectSphereFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkProjectSphereFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkProjectSphereFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPointSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPointSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkProjectSphereFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetCenter", GetCenter);
	Nan::SetPrototypeMethod(tpl, "getCenter", GetCenter);

	Nan::SetPrototypeMethod(tpl, "GetKeepPolePoints", GetKeepPolePoints);
	Nan::SetPrototypeMethod(tpl, "getKeepPolePoints", GetKeepPolePoints);

	Nan::SetPrototypeMethod(tpl, "GetTranslateZ", GetTranslateZ);
	Nan::SetPrototypeMethod(tpl, "getTranslateZ", GetTranslateZ);

	Nan::SetPrototypeMethod(tpl, "KeepPolePointsOff", KeepPolePointsOff);
	Nan::SetPrototypeMethod(tpl, "keepPolePointsOff", KeepPolePointsOff);

	Nan::SetPrototypeMethod(tpl, "KeepPolePointsOn", KeepPolePointsOn);
	Nan::SetPrototypeMethod(tpl, "keepPolePointsOn", KeepPolePointsOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCenter", SetCenter);
	Nan::SetPrototypeMethod(tpl, "setCenter", SetCenter);

	Nan::SetPrototypeMethod(tpl, "SetKeepPolePoints", SetKeepPolePoints);
	Nan::SetPrototypeMethod(tpl, "setKeepPolePoints", SetKeepPolePoints);

	Nan::SetPrototypeMethod(tpl, "SetTranslateZ", SetTranslateZ);
	Nan::SetPrototypeMethod(tpl, "setTranslateZ", SetTranslateZ);

	Nan::SetPrototypeMethod(tpl, "TranslateZOff", TranslateZOff);
	Nan::SetPrototypeMethod(tpl, "translateZOff", TranslateZOff);

	Nan::SetPrototypeMethod(tpl, "TranslateZOn", TranslateZOn);
	Nan::SetPrototypeMethod(tpl, "translateZOn", TranslateZOn);

#ifdef VTK_NODE_PLUS_VTKPROJECTSPHEREFILTERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPROJECTSPHEREFILTERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkProjectSphereFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkProjectSphereFilter> native = vtkSmartPointer<vtkProjectSphereFilter>::New();
		VtkProjectSphereFilterWrap* obj = new VtkProjectSphereFilterWrap(native);
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

void VtkProjectSphereFilterWrap::GetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectSphereFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProjectSphereFilterWrap>(info.Holder());
	vtkProjectSphereFilter *native = (vtkProjectSphereFilter *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCenter();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkProjectSphereFilterWrap::GetKeepPolePoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectSphereFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProjectSphereFilterWrap>(info.Holder());
	vtkProjectSphereFilter *native = (vtkProjectSphereFilter *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetKeepPolePoints();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProjectSphereFilterWrap::GetTranslateZ(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectSphereFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProjectSphereFilterWrap>(info.Holder());
	vtkProjectSphereFilter *native = (vtkProjectSphereFilter *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTranslateZ();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProjectSphereFilterWrap::KeepPolePointsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectSphereFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProjectSphereFilterWrap>(info.Holder());
	vtkProjectSphereFilter *native = (vtkProjectSphereFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->KeepPolePointsOff();
}

void VtkProjectSphereFilterWrap::KeepPolePointsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectSphereFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProjectSphereFilterWrap>(info.Holder());
	vtkProjectSphereFilter *native = (vtkProjectSphereFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->KeepPolePointsOn();
}

void VtkProjectSphereFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectSphereFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProjectSphereFilterWrap>(info.Holder());
	vtkProjectSphereFilter *native = (vtkProjectSphereFilter *)wrapper->native.GetPointer();
	vtkProjectSphereFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkProjectSphereFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkProjectSphereFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProjectSphereFilterWrap *w = new VtkProjectSphereFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkProjectSphereFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectSphereFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProjectSphereFilterWrap>(info.Holder());
	vtkProjectSphereFilter *native = (vtkProjectSphereFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkProjectSphereFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkProjectSphereFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkProjectSphereFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkProjectSphereFilterWrap *w = new VtkProjectSphereFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProjectSphereFilterWrap::SetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectSphereFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProjectSphereFilterWrap>(info.Holder());
	vtkProjectSphereFilter *native = (vtkProjectSphereFilter *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCenter(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
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
		native->SetCenter(
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
				native->SetCenter(
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

void VtkProjectSphereFilterWrap::SetKeepPolePoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectSphereFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProjectSphereFilterWrap>(info.Holder());
	vtkProjectSphereFilter *native = (vtkProjectSphereFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetKeepPolePoints(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProjectSphereFilterWrap::SetTranslateZ(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectSphereFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProjectSphereFilterWrap>(info.Holder());
	vtkProjectSphereFilter *native = (vtkProjectSphereFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTranslateZ(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProjectSphereFilterWrap::TranslateZOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectSphereFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProjectSphereFilterWrap>(info.Holder());
	vtkProjectSphereFilter *native = (vtkProjectSphereFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TranslateZOff();
}

void VtkProjectSphereFilterWrap::TranslateZOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectSphereFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProjectSphereFilterWrap>(info.Holder());
	vtkProjectSphereFilter *native = (vtkProjectSphereFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TranslateZOn();
}

