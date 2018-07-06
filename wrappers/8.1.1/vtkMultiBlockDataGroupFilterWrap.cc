/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkMultiBlockDataSetAlgorithmWrap.h"
#include "vtkMultiBlockDataGroupFilterWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkDataObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkMultiBlockDataGroupFilterWrap::ptpl;

VtkMultiBlockDataGroupFilterWrap::VtkMultiBlockDataGroupFilterWrap()
{ }

VtkMultiBlockDataGroupFilterWrap::VtkMultiBlockDataGroupFilterWrap(vtkSmartPointer<vtkMultiBlockDataGroupFilter> _native)
{ native = _native; }

VtkMultiBlockDataGroupFilterWrap::~VtkMultiBlockDataGroupFilterWrap()
{ }

void VtkMultiBlockDataGroupFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkMultiBlockDataGroupFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("MultiBlockDataGroupFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkMultiBlockDataGroupFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkMultiBlockDataGroupFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkMultiBlockDataSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkMultiBlockDataSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkMultiBlockDataGroupFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddInputData", AddInputData);
	Nan::SetPrototypeMethod(tpl, "addInputData", AddInputData);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKMULTIBLOCKDATAGROUPFILTERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKMULTIBLOCKDATAGROUPFILTERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkMultiBlockDataGroupFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkMultiBlockDataGroupFilter> native = vtkSmartPointer<vtkMultiBlockDataGroupFilter>::New();
		VtkMultiBlockDataGroupFilterWrap* obj = new VtkMultiBlockDataGroupFilterWrap(native);
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

void VtkMultiBlockDataGroupFilterWrap::AddInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMultiBlockDataGroupFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMultiBlockDataGroupFilterWrap>(info.Holder());
	vtkMultiBlockDataGroupFilter *native = (vtkMultiBlockDataGroupFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddInputData(
			(vtkDataObject *) a0->native.GetPointer()
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[1]))
		{
			VtkDataObjectWrap *a1 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[1]->ToObject());
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->AddInputData(
				info[0]->Int32Value(),
				(vtkDataObject *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMultiBlockDataGroupFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMultiBlockDataGroupFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMultiBlockDataGroupFilterWrap>(info.Holder());
	vtkMultiBlockDataGroupFilter *native = (vtkMultiBlockDataGroupFilter *)wrapper->native.GetPointer();
	vtkMultiBlockDataGroupFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkMultiBlockDataGroupFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMultiBlockDataGroupFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMultiBlockDataGroupFilterWrap *w = new VtkMultiBlockDataGroupFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMultiBlockDataGroupFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMultiBlockDataGroupFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMultiBlockDataGroupFilterWrap>(info.Holder());
	vtkMultiBlockDataGroupFilter *native = (vtkMultiBlockDataGroupFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkMultiBlockDataGroupFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkMultiBlockDataGroupFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkMultiBlockDataGroupFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMultiBlockDataGroupFilterWrap *w = new VtkMultiBlockDataGroupFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

