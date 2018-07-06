/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkDepthImageProcessingPassWrap.h"
#include "vtkPointFillPassWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkWindowWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPointFillPassWrap::ptpl;

VtkPointFillPassWrap::VtkPointFillPassWrap()
{ }

VtkPointFillPassWrap::VtkPointFillPassWrap(vtkSmartPointer<vtkPointFillPass> _native)
{ native = _native; }

VtkPointFillPassWrap::~VtkPointFillPassWrap()
{ }

void VtkPointFillPassWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPointFillPass").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PointFillPass").ToLocalChecked(), ConstructorGetter);
}

void VtkPointFillPassWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPointFillPassWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDepthImageProcessingPassWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDepthImageProcessingPassWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPointFillPassWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetCandidatePointRatio", GetCandidatePointRatio);
	Nan::SetPrototypeMethod(tpl, "getCandidatePointRatio", GetCandidatePointRatio);

	Nan::SetPrototypeMethod(tpl, "GetMinimumCandidateAngle", GetMinimumCandidateAngle);
	Nan::SetPrototypeMethod(tpl, "getMinimumCandidateAngle", GetMinimumCandidateAngle);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCandidatePointRatio", SetCandidatePointRatio);
	Nan::SetPrototypeMethod(tpl, "setCandidatePointRatio", SetCandidatePointRatio);

	Nan::SetPrototypeMethod(tpl, "SetMinimumCandidateAngle", SetMinimumCandidateAngle);
	Nan::SetPrototypeMethod(tpl, "setMinimumCandidateAngle", SetMinimumCandidateAngle);

#ifdef VTK_NODE_PLUS_VTKPOINTFILLPASSWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPOINTFILLPASSWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkPointFillPassWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPointFillPass> native = vtkSmartPointer<vtkPointFillPass>::New();
		VtkPointFillPassWrap* obj = new VtkPointFillPassWrap(native);
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

void VtkPointFillPassWrap::GetCandidatePointRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointFillPassWrap *wrapper = ObjectWrap::Unwrap<VtkPointFillPassWrap>(info.Holder());
	vtkPointFillPass *native = (vtkPointFillPass *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCandidatePointRatio();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointFillPassWrap::GetMinimumCandidateAngle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointFillPassWrap *wrapper = ObjectWrap::Unwrap<VtkPointFillPassWrap>(info.Holder());
	vtkPointFillPass *native = (vtkPointFillPass *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMinimumCandidateAngle();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointFillPassWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointFillPassWrap *wrapper = ObjectWrap::Unwrap<VtkPointFillPassWrap>(info.Holder());
	vtkPointFillPass *native = (vtkPointFillPass *)wrapper->native.GetPointer();
	vtkPointFillPass * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkPointFillPassWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPointFillPassWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPointFillPassWrap *w = new VtkPointFillPassWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPointFillPassWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointFillPassWrap *wrapper = ObjectWrap::Unwrap<VtkPointFillPassWrap>(info.Holder());
	vtkPointFillPass *native = (vtkPointFillPass *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkWindowWrap::ptpl))->HasInstance(info[0]))
	{
		VtkWindowWrap *a0 = ObjectWrap::Unwrap<VtkWindowWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ReleaseGraphicsResources(
			(vtkWindow *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointFillPassWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointFillPassWrap *wrapper = ObjectWrap::Unwrap<VtkPointFillPassWrap>(info.Holder());
	vtkPointFillPass *native = (vtkPointFillPass *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkPointFillPass * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkPointFillPassWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPointFillPassWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPointFillPassWrap *w = new VtkPointFillPassWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointFillPassWrap::SetCandidatePointRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointFillPassWrap *wrapper = ObjectWrap::Unwrap<VtkPointFillPassWrap>(info.Holder());
	vtkPointFillPass *native = (vtkPointFillPass *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCandidatePointRatio(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointFillPassWrap::SetMinimumCandidateAngle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointFillPassWrap *wrapper = ObjectWrap::Unwrap<VtkPointFillPassWrap>(info.Holder());
	vtkPointFillPass *native = (vtkPointFillPass *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMinimumCandidateAngle(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

