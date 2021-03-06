/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkPipelineSizeWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkAlgorithmWrap.h"
#include "vtkPolyDataMapperWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPipelineSizeWrap::ptpl;

VtkPipelineSizeWrap::VtkPipelineSizeWrap()
{ }

VtkPipelineSizeWrap::VtkPipelineSizeWrap(vtkSmartPointer<vtkPipelineSize> _native)
{ native = _native; }

VtkPipelineSizeWrap::~VtkPipelineSizeWrap()
{ }

void VtkPipelineSizeWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPipelineSize").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PipelineSize").ToLocalChecked(), ConstructorGetter);
}

void VtkPipelineSizeWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPipelineSizeWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPipelineSizeWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetEstimatedSize", GetEstimatedSize);
	Nan::SetPrototypeMethod(tpl, "getEstimatedSize", GetEstimatedSize);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfSubPieces", GetNumberOfSubPieces);
	Nan::SetPrototypeMethod(tpl, "getNumberOfSubPieces", GetNumberOfSubPieces);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKPIPELINESIZEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPIPELINESIZEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkPipelineSizeWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPipelineSize> native = vtkSmartPointer<vtkPipelineSize>::New();
		VtkPipelineSizeWrap* obj = new VtkPipelineSizeWrap(native);
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

void VtkPipelineSizeWrap::GetEstimatedSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPipelineSizeWrap *wrapper = ObjectWrap::Unwrap<VtkPipelineSizeWrap>(info.Holder());
	vtkPipelineSize *native = (vtkPipelineSize *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAlgorithmWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAlgorithmWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				unsigned int r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->GetEstimatedSize(
					(vtkAlgorithm *) a0->native.GetPointer(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPipelineSizeWrap::GetNumberOfSubPieces(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPipelineSizeWrap *wrapper = ObjectWrap::Unwrap<VtkPipelineSizeWrap>(info.Holder());
	vtkPipelineSize *native = (vtkPipelineSize *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkPolyDataMapperWrap::ptpl))->HasInstance(info[1]))
		{
			VtkPolyDataMapperWrap *a1 = ObjectWrap::Unwrap<VtkPolyDataMapperWrap>(info[1]->ToObject());
			unsigned int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetNumberOfSubPieces(
				info[0]->Uint32Value(),
				(vtkPolyDataMapper *) a1->native.GetPointer()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPipelineSizeWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPipelineSizeWrap *wrapper = ObjectWrap::Unwrap<VtkPipelineSizeWrap>(info.Holder());
	vtkPipelineSize *native = (vtkPipelineSize *)wrapper->native.GetPointer();
	vtkPipelineSize * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkPipelineSizeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPipelineSizeWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPipelineSizeWrap *w = new VtkPipelineSizeWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPipelineSizeWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPipelineSizeWrap *wrapper = ObjectWrap::Unwrap<VtkPipelineSizeWrap>(info.Holder());
	vtkPipelineSize *native = (vtkPipelineSize *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkPipelineSize * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkPipelineSizeWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPipelineSizeWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPipelineSizeWrap *w = new VtkPipelineSizeWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

