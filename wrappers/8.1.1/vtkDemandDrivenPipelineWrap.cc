/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkExecutiveWrap.h"
#include "vtkDemandDrivenPipelineWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkInformationRequestKeyWrap.h"
#include "vtkInformationIntegerKeyWrap.h"
#include "vtkDataObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDemandDrivenPipelineWrap::ptpl;

VtkDemandDrivenPipelineWrap::VtkDemandDrivenPipelineWrap()
{ }

VtkDemandDrivenPipelineWrap::VtkDemandDrivenPipelineWrap(vtkSmartPointer<vtkDemandDrivenPipeline> _native)
{ native = _native; }

VtkDemandDrivenPipelineWrap::~VtkDemandDrivenPipelineWrap()
{ }

void VtkDemandDrivenPipelineWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDemandDrivenPipeline").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DemandDrivenPipeline").ToLocalChecked(), ConstructorGetter);
}

void VtkDemandDrivenPipelineWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDemandDrivenPipelineWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkExecutiveWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkExecutiveWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDemandDrivenPipelineWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "DATA_NOT_GENERATED", DATA_NOT_GENERATED);

	Nan::SetPrototypeMethod(tpl, "GetReleaseDataFlag", GetReleaseDataFlag);
	Nan::SetPrototypeMethod(tpl, "getReleaseDataFlag", GetReleaseDataFlag);

	Nan::SetPrototypeMethod(tpl, "NewDataObject", NewDataObject);
	Nan::SetPrototypeMethod(tpl, "newDataObject", NewDataObject);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RELEASE_DATA", RELEASE_DATA);

	Nan::SetPrototypeMethod(tpl, "REQUEST_DATA", REQUEST_DATA);

	Nan::SetPrototypeMethod(tpl, "REQUEST_DATA_NOT_GENERATED", REQUEST_DATA_NOT_GENERATED);

	Nan::SetPrototypeMethod(tpl, "REQUEST_DATA_OBJECT", REQUEST_DATA_OBJECT);

	Nan::SetPrototypeMethod(tpl, "REQUEST_INFORMATION", REQUEST_INFORMATION);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetReleaseDataFlag", SetReleaseDataFlag);
	Nan::SetPrototypeMethod(tpl, "setReleaseDataFlag", SetReleaseDataFlag);

	Nan::SetPrototypeMethod(tpl, "Update", Update);
	Nan::SetPrototypeMethod(tpl, "update", Update);

	Nan::SetPrototypeMethod(tpl, "UpdateData", UpdateData);
	Nan::SetPrototypeMethod(tpl, "updateData", UpdateData);

	Nan::SetPrototypeMethod(tpl, "UpdateDataObject", UpdateDataObject);
	Nan::SetPrototypeMethod(tpl, "updateDataObject", UpdateDataObject);

	Nan::SetPrototypeMethod(tpl, "UpdateInformation", UpdateInformation);
	Nan::SetPrototypeMethod(tpl, "updateInformation", UpdateInformation);

	Nan::SetPrototypeMethod(tpl, "UpdatePipelineMTime", UpdatePipelineMTime);
	Nan::SetPrototypeMethod(tpl, "updatePipelineMTime", UpdatePipelineMTime);

#ifdef VTK_NODE_PLUS_VTKDEMANDDRIVENPIPELINEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKDEMANDDRIVENPIPELINEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkDemandDrivenPipelineWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDemandDrivenPipeline> native = vtkSmartPointer<vtkDemandDrivenPipeline>::New();
		VtkDemandDrivenPipelineWrap* obj = new VtkDemandDrivenPipelineWrap(native);
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

void VtkDemandDrivenPipelineWrap::DATA_NOT_GENERATED(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDemandDrivenPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkDemandDrivenPipelineWrap>(info.Holder());
	vtkDemandDrivenPipeline *native = (vtkDemandDrivenPipeline *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->DATA_NOT_GENERATED();
	VtkInformationIntegerKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationIntegerKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerKeyWrap *w = new VtkInformationIntegerKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDemandDrivenPipelineWrap::GetReleaseDataFlag(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDemandDrivenPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkDemandDrivenPipelineWrap>(info.Holder());
	vtkDemandDrivenPipeline *native = (vtkDemandDrivenPipeline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetReleaseDataFlag(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDemandDrivenPipelineWrap::NewDataObject(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDemandDrivenPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkDemandDrivenPipelineWrap>(info.Holder());
	vtkDemandDrivenPipeline *native = (vtkDemandDrivenPipeline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		vtkDataObject * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->NewDataObject(
			*a0
		);
		VtkDataObjectWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDataObjectWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDataObjectWrap *w = new VtkDataObjectWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDemandDrivenPipelineWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDemandDrivenPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkDemandDrivenPipelineWrap>(info.Holder());
	vtkDemandDrivenPipeline *native = (vtkDemandDrivenPipeline *)wrapper->native.GetPointer();
	vtkDemandDrivenPipeline * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkDemandDrivenPipelineWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDemandDrivenPipelineWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDemandDrivenPipelineWrap *w = new VtkDemandDrivenPipelineWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDemandDrivenPipelineWrap::RELEASE_DATA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDemandDrivenPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkDemandDrivenPipelineWrap>(info.Holder());
	vtkDemandDrivenPipeline *native = (vtkDemandDrivenPipeline *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->RELEASE_DATA();
	VtkInformationIntegerKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationIntegerKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerKeyWrap *w = new VtkInformationIntegerKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDemandDrivenPipelineWrap::REQUEST_DATA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDemandDrivenPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkDemandDrivenPipelineWrap>(info.Holder());
	vtkDemandDrivenPipeline *native = (vtkDemandDrivenPipeline *)wrapper->native.GetPointer();
	vtkInformationRequestKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->REQUEST_DATA();
	VtkInformationRequestKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationRequestKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationRequestKeyWrap *w = new VtkInformationRequestKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDemandDrivenPipelineWrap::REQUEST_DATA_NOT_GENERATED(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDemandDrivenPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkDemandDrivenPipelineWrap>(info.Holder());
	vtkDemandDrivenPipeline *native = (vtkDemandDrivenPipeline *)wrapper->native.GetPointer();
	vtkInformationRequestKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->REQUEST_DATA_NOT_GENERATED();
	VtkInformationRequestKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationRequestKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationRequestKeyWrap *w = new VtkInformationRequestKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDemandDrivenPipelineWrap::REQUEST_DATA_OBJECT(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDemandDrivenPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkDemandDrivenPipelineWrap>(info.Holder());
	vtkDemandDrivenPipeline *native = (vtkDemandDrivenPipeline *)wrapper->native.GetPointer();
	vtkInformationRequestKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->REQUEST_DATA_OBJECT();
	VtkInformationRequestKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationRequestKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationRequestKeyWrap *w = new VtkInformationRequestKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDemandDrivenPipelineWrap::REQUEST_INFORMATION(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDemandDrivenPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkDemandDrivenPipelineWrap>(info.Holder());
	vtkDemandDrivenPipeline *native = (vtkDemandDrivenPipeline *)wrapper->native.GetPointer();
	vtkInformationRequestKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->REQUEST_INFORMATION();
	VtkInformationRequestKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationRequestKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationRequestKeyWrap *w = new VtkInformationRequestKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDemandDrivenPipelineWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDemandDrivenPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkDemandDrivenPipelineWrap>(info.Holder());
	vtkDemandDrivenPipeline *native = (vtkDemandDrivenPipeline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkDemandDrivenPipeline * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkDemandDrivenPipelineWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDemandDrivenPipelineWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDemandDrivenPipelineWrap *w = new VtkDemandDrivenPipelineWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDemandDrivenPipelineWrap::SetReleaseDataFlag(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDemandDrivenPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkDemandDrivenPipelineWrap>(info.Holder());
	vtkDemandDrivenPipeline *native = (vtkDemandDrivenPipeline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->SetReleaseDataFlag(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDemandDrivenPipelineWrap::Update(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDemandDrivenPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkDemandDrivenPipelineWrap>(info.Holder());
	vtkDemandDrivenPipeline *native = (vtkDemandDrivenPipeline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->Update(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->Update();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDemandDrivenPipelineWrap::UpdateData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDemandDrivenPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkDemandDrivenPipelineWrap>(info.Holder());
	vtkDemandDrivenPipeline *native = (vtkDemandDrivenPipeline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->UpdateData(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDemandDrivenPipelineWrap::UpdateDataObject(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDemandDrivenPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkDemandDrivenPipelineWrap>(info.Holder());
	vtkDemandDrivenPipeline *native = (vtkDemandDrivenPipeline *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->UpdateDataObject();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDemandDrivenPipelineWrap::UpdateInformation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDemandDrivenPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkDemandDrivenPipelineWrap>(info.Holder());
	vtkDemandDrivenPipeline *native = (vtkDemandDrivenPipeline *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->UpdateInformation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDemandDrivenPipelineWrap::UpdatePipelineMTime(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDemandDrivenPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkDemandDrivenPipelineWrap>(info.Holder());
	vtkDemandDrivenPipeline *native = (vtkDemandDrivenPipeline *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->UpdatePipelineMTime();
	info.GetReturnValue().Set(Nan::New(r));
}

