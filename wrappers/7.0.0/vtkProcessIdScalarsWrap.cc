/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataSetAlgorithmWrap.h"
#include "vtkProcessIdScalarsWrap.h"
#include "vtkObjectWrap.h"
#include "vtkMultiProcessControllerWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkProcessIdScalarsWrap::ptpl;

VtkProcessIdScalarsWrap::VtkProcessIdScalarsWrap()
{ }

VtkProcessIdScalarsWrap::VtkProcessIdScalarsWrap(vtkSmartPointer<vtkProcessIdScalars> _native)
{ native = _native; }

VtkProcessIdScalarsWrap::~VtkProcessIdScalarsWrap()
{ }

void VtkProcessIdScalarsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkProcessIdScalars").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ProcessIdScalars").ToLocalChecked(), ConstructorGetter);
}

void VtkProcessIdScalarsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkProcessIdScalarsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkProcessIdScalarsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetController", GetController);
	Nan::SetPrototypeMethod(tpl, "getController", GetController);

	Nan::SetPrototypeMethod(tpl, "GetRandomMode", GetRandomMode);
	Nan::SetPrototypeMethod(tpl, "getRandomMode", GetRandomMode);

	Nan::SetPrototypeMethod(tpl, "GetScalarMode", GetScalarMode);
	Nan::SetPrototypeMethod(tpl, "getScalarMode", GetScalarMode);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RandomModeOff", RandomModeOff);
	Nan::SetPrototypeMethod(tpl, "randomModeOff", RandomModeOff);

	Nan::SetPrototypeMethod(tpl, "RandomModeOn", RandomModeOn);
	Nan::SetPrototypeMethod(tpl, "randomModeOn", RandomModeOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetController", SetController);
	Nan::SetPrototypeMethod(tpl, "setController", SetController);

	Nan::SetPrototypeMethod(tpl, "SetRandomMode", SetRandomMode);
	Nan::SetPrototypeMethod(tpl, "setRandomMode", SetRandomMode);

	Nan::SetPrototypeMethod(tpl, "SetScalarModeToCellData", SetScalarModeToCellData);
	Nan::SetPrototypeMethod(tpl, "setScalarModeToCellData", SetScalarModeToCellData);

	Nan::SetPrototypeMethod(tpl, "SetScalarModeToPointData", SetScalarModeToPointData);
	Nan::SetPrototypeMethod(tpl, "setScalarModeToPointData", SetScalarModeToPointData);

	ptpl.Reset( tpl );
}

void VtkProcessIdScalarsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkProcessIdScalars> native = vtkSmartPointer<vtkProcessIdScalars>::New();
		VtkProcessIdScalarsWrap* obj = new VtkProcessIdScalarsWrap(native);
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

void VtkProcessIdScalarsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProcessIdScalarsWrap *wrapper = ObjectWrap::Unwrap<VtkProcessIdScalarsWrap>(info.Holder());
	vtkProcessIdScalars *native = (vtkProcessIdScalars *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkProcessIdScalarsWrap::GetController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProcessIdScalarsWrap *wrapper = ObjectWrap::Unwrap<VtkProcessIdScalarsWrap>(info.Holder());
	vtkProcessIdScalars *native = (vtkProcessIdScalars *)wrapper->native.GetPointer();
	vtkMultiProcessController * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetController();
		VtkMultiProcessControllerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMultiProcessControllerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMultiProcessControllerWrap *w = new VtkMultiProcessControllerWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkProcessIdScalarsWrap::GetRandomMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProcessIdScalarsWrap *wrapper = ObjectWrap::Unwrap<VtkProcessIdScalarsWrap>(info.Holder());
	vtkProcessIdScalars *native = (vtkProcessIdScalars *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRandomMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProcessIdScalarsWrap::GetScalarMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProcessIdScalarsWrap *wrapper = ObjectWrap::Unwrap<VtkProcessIdScalarsWrap>(info.Holder());
	vtkProcessIdScalars *native = (vtkProcessIdScalars *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProcessIdScalarsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProcessIdScalarsWrap *wrapper = ObjectWrap::Unwrap<VtkProcessIdScalarsWrap>(info.Holder());
	vtkProcessIdScalars *native = (vtkProcessIdScalars *)wrapper->native.GetPointer();
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

void VtkProcessIdScalarsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProcessIdScalarsWrap *wrapper = ObjectWrap::Unwrap<VtkProcessIdScalarsWrap>(info.Holder());
	vtkProcessIdScalars *native = (vtkProcessIdScalars *)wrapper->native.GetPointer();
	vtkProcessIdScalars * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkProcessIdScalarsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkProcessIdScalarsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProcessIdScalarsWrap *w = new VtkProcessIdScalarsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkProcessIdScalarsWrap::RandomModeOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProcessIdScalarsWrap *wrapper = ObjectWrap::Unwrap<VtkProcessIdScalarsWrap>(info.Holder());
	vtkProcessIdScalars *native = (vtkProcessIdScalars *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RandomModeOff();
}

void VtkProcessIdScalarsWrap::RandomModeOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProcessIdScalarsWrap *wrapper = ObjectWrap::Unwrap<VtkProcessIdScalarsWrap>(info.Holder());
	vtkProcessIdScalars *native = (vtkProcessIdScalars *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RandomModeOn();
}

void VtkProcessIdScalarsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProcessIdScalarsWrap *wrapper = ObjectWrap::Unwrap<VtkProcessIdScalarsWrap>(info.Holder());
	vtkProcessIdScalars *native = (vtkProcessIdScalars *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkProcessIdScalars * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkProcessIdScalarsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkProcessIdScalarsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkProcessIdScalarsWrap *w = new VtkProcessIdScalarsWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProcessIdScalarsWrap::SetController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProcessIdScalarsWrap *wrapper = ObjectWrap::Unwrap<VtkProcessIdScalarsWrap>(info.Holder());
	vtkProcessIdScalars *native = (vtkProcessIdScalars *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMultiProcessControllerWrap::ptpl))->HasInstance(info[0]))
	{
		VtkMultiProcessControllerWrap *a0 = ObjectWrap::Unwrap<VtkMultiProcessControllerWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetController(
			(vtkMultiProcessController *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProcessIdScalarsWrap::SetRandomMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProcessIdScalarsWrap *wrapper = ObjectWrap::Unwrap<VtkProcessIdScalarsWrap>(info.Holder());
	vtkProcessIdScalars *native = (vtkProcessIdScalars *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRandomMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProcessIdScalarsWrap::SetScalarModeToCellData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProcessIdScalarsWrap *wrapper = ObjectWrap::Unwrap<VtkProcessIdScalarsWrap>(info.Holder());
	vtkProcessIdScalars *native = (vtkProcessIdScalars *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarModeToCellData();
}

void VtkProcessIdScalarsWrap::SetScalarModeToPointData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProcessIdScalarsWrap *wrapper = ObjectWrap::Unwrap<VtkProcessIdScalarsWrap>(info.Holder());
	vtkProcessIdScalars *native = (vtkProcessIdScalars *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarModeToPointData();
}

