/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkMultiBlockDataSetAlgorithmWrap.h"
#include "vtkStructuredGridPartitionerWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkStructuredGridPartitionerWrap::ptpl;

VtkStructuredGridPartitionerWrap::VtkStructuredGridPartitionerWrap()
{ }

VtkStructuredGridPartitionerWrap::VtkStructuredGridPartitionerWrap(vtkSmartPointer<vtkStructuredGridPartitioner> _native)
{ native = _native; }

VtkStructuredGridPartitionerWrap::~VtkStructuredGridPartitionerWrap()
{ }

void VtkStructuredGridPartitionerWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkStructuredGridPartitioner").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("StructuredGridPartitioner").ToLocalChecked(), ConstructorGetter);
}

void VtkStructuredGridPartitionerWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkStructuredGridPartitionerWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkMultiBlockDataSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkMultiBlockDataSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkStructuredGridPartitionerWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "DuplicateNodesOff", DuplicateNodesOff);
	Nan::SetPrototypeMethod(tpl, "duplicateNodesOff", DuplicateNodesOff);

	Nan::SetPrototypeMethod(tpl, "DuplicateNodesOn", DuplicateNodesOn);
	Nan::SetPrototypeMethod(tpl, "duplicateNodesOn", DuplicateNodesOn);

	Nan::SetPrototypeMethod(tpl, "GetDuplicateNodes", GetDuplicateNodes);
	Nan::SetPrototypeMethod(tpl, "getDuplicateNodes", GetDuplicateNodes);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfGhostLayers", GetNumberOfGhostLayers);
	Nan::SetPrototypeMethod(tpl, "getNumberOfGhostLayers", GetNumberOfGhostLayers);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfPartitions", GetNumberOfPartitions);
	Nan::SetPrototypeMethod(tpl, "getNumberOfPartitions", GetNumberOfPartitions);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDuplicateNodes", SetDuplicateNodes);
	Nan::SetPrototypeMethod(tpl, "setDuplicateNodes", SetDuplicateNodes);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfGhostLayers", SetNumberOfGhostLayers);
	Nan::SetPrototypeMethod(tpl, "setNumberOfGhostLayers", SetNumberOfGhostLayers);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfPartitions", SetNumberOfPartitions);
	Nan::SetPrototypeMethod(tpl, "setNumberOfPartitions", SetNumberOfPartitions);

#ifdef VTK_NODE_PLUS_VTKSTRUCTUREDGRIDPARTITIONERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKSTRUCTUREDGRIDPARTITIONERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkStructuredGridPartitionerWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkStructuredGridPartitioner> native = vtkSmartPointer<vtkStructuredGridPartitioner>::New();
		VtkStructuredGridPartitionerWrap* obj = new VtkStructuredGridPartitionerWrap(native);
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

void VtkStructuredGridPartitionerWrap::DuplicateNodesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridPartitionerWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridPartitionerWrap>(info.Holder());
	vtkStructuredGridPartitioner *native = (vtkStructuredGridPartitioner *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DuplicateNodesOff();
}

void VtkStructuredGridPartitionerWrap::DuplicateNodesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridPartitionerWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridPartitionerWrap>(info.Holder());
	vtkStructuredGridPartitioner *native = (vtkStructuredGridPartitioner *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DuplicateNodesOn();
}

void VtkStructuredGridPartitionerWrap::GetDuplicateNodes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridPartitionerWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridPartitionerWrap>(info.Holder());
	vtkStructuredGridPartitioner *native = (vtkStructuredGridPartitioner *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDuplicateNodes();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStructuredGridPartitionerWrap::GetNumberOfGhostLayers(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridPartitionerWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridPartitionerWrap>(info.Holder());
	vtkStructuredGridPartitioner *native = (vtkStructuredGridPartitioner *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfGhostLayers();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStructuredGridPartitionerWrap::GetNumberOfPartitions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridPartitionerWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridPartitionerWrap>(info.Holder());
	vtkStructuredGridPartitioner *native = (vtkStructuredGridPartitioner *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfPartitions();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStructuredGridPartitionerWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridPartitionerWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridPartitionerWrap>(info.Holder());
	vtkStructuredGridPartitioner *native = (vtkStructuredGridPartitioner *)wrapper->native.GetPointer();
	vtkStructuredGridPartitioner * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkStructuredGridPartitionerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStructuredGridPartitionerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStructuredGridPartitionerWrap *w = new VtkStructuredGridPartitionerWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkStructuredGridPartitionerWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridPartitionerWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridPartitionerWrap>(info.Holder());
	vtkStructuredGridPartitioner *native = (vtkStructuredGridPartitioner *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkStructuredGridPartitioner * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkStructuredGridPartitionerWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkStructuredGridPartitionerWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkStructuredGridPartitionerWrap *w = new VtkStructuredGridPartitionerWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredGridPartitionerWrap::SetDuplicateNodes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridPartitionerWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridPartitionerWrap>(info.Holder());
	vtkStructuredGridPartitioner *native = (vtkStructuredGridPartitioner *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDuplicateNodes(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredGridPartitionerWrap::SetNumberOfGhostLayers(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridPartitionerWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridPartitionerWrap>(info.Holder());
	vtkStructuredGridPartitioner *native = (vtkStructuredGridPartitioner *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfGhostLayers(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredGridPartitionerWrap::SetNumberOfPartitions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridPartitionerWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridPartitionerWrap>(info.Holder());
	vtkStructuredGridPartitioner *native = (vtkStructuredGridPartitioner *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfPartitions(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

