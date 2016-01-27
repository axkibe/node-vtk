/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkWriterWrap.h"
#include "vtkExodusIIWriterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkModelMetadataWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkExodusIIWriterWrap::ptpl;

VtkExodusIIWriterWrap::VtkExodusIIWriterWrap()
{ }

VtkExodusIIWriterWrap::VtkExodusIIWriterWrap(vtkSmartPointer<vtkExodusIIWriter> _native)
{ native = _native; }

VtkExodusIIWriterWrap::~VtkExodusIIWriterWrap()
{ }

void VtkExodusIIWriterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkExodusIIWriter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ExodusIIWriter").ToLocalChecked(), ConstructorGetter);
}

void VtkExodusIIWriterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkExodusIIWriterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkWriterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkWriterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkExodusIIWriterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetBlockIdArrayName", GetBlockIdArrayName);
	Nan::SetPrototypeMethod(tpl, "getBlockIdArrayName", GetBlockIdArrayName);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetGhostLevel", GetGhostLevel);
	Nan::SetPrototypeMethod(tpl, "getGhostLevel", GetGhostLevel);

	Nan::SetPrototypeMethod(tpl, "GetModelMetadata", GetModelMetadata);
	Nan::SetPrototypeMethod(tpl, "getModelMetadata", GetModelMetadata);

	Nan::SetPrototypeMethod(tpl, "GetStoreDoubles", GetStoreDoubles);
	Nan::SetPrototypeMethod(tpl, "getStoreDoubles", GetStoreDoubles);

	Nan::SetPrototypeMethod(tpl, "GetWriteAllTimeSteps", GetWriteAllTimeSteps);
	Nan::SetPrototypeMethod(tpl, "getWriteAllTimeSteps", GetWriteAllTimeSteps);

	Nan::SetPrototypeMethod(tpl, "GetWriteOutBlockIdArray", GetWriteOutBlockIdArray);
	Nan::SetPrototypeMethod(tpl, "getWriteOutBlockIdArray", GetWriteOutBlockIdArray);

	Nan::SetPrototypeMethod(tpl, "GetWriteOutGlobalElementIdArray", GetWriteOutGlobalElementIdArray);
	Nan::SetPrototypeMethod(tpl, "getWriteOutGlobalElementIdArray", GetWriteOutGlobalElementIdArray);

	Nan::SetPrototypeMethod(tpl, "GetWriteOutGlobalNodeIdArray", GetWriteOutGlobalNodeIdArray);
	Nan::SetPrototypeMethod(tpl, "getWriteOutGlobalNodeIdArray", GetWriteOutGlobalNodeIdArray);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBlockIdArrayName", SetBlockIdArrayName);
	Nan::SetPrototypeMethod(tpl, "setBlockIdArrayName", SetBlockIdArrayName);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	Nan::SetPrototypeMethod(tpl, "SetGhostLevel", SetGhostLevel);
	Nan::SetPrototypeMethod(tpl, "setGhostLevel", SetGhostLevel);

	Nan::SetPrototypeMethod(tpl, "SetModelMetadata", SetModelMetadata);
	Nan::SetPrototypeMethod(tpl, "setModelMetadata", SetModelMetadata);

	Nan::SetPrototypeMethod(tpl, "SetStoreDoubles", SetStoreDoubles);
	Nan::SetPrototypeMethod(tpl, "setStoreDoubles", SetStoreDoubles);

	Nan::SetPrototypeMethod(tpl, "SetWriteAllTimeSteps", SetWriteAllTimeSteps);
	Nan::SetPrototypeMethod(tpl, "setWriteAllTimeSteps", SetWriteAllTimeSteps);

	Nan::SetPrototypeMethod(tpl, "SetWriteOutBlockIdArray", SetWriteOutBlockIdArray);
	Nan::SetPrototypeMethod(tpl, "setWriteOutBlockIdArray", SetWriteOutBlockIdArray);

	Nan::SetPrototypeMethod(tpl, "SetWriteOutGlobalElementIdArray", SetWriteOutGlobalElementIdArray);
	Nan::SetPrototypeMethod(tpl, "setWriteOutGlobalElementIdArray", SetWriteOutGlobalElementIdArray);

	Nan::SetPrototypeMethod(tpl, "SetWriteOutGlobalNodeIdArray", SetWriteOutGlobalNodeIdArray);
	Nan::SetPrototypeMethod(tpl, "setWriteOutGlobalNodeIdArray", SetWriteOutGlobalNodeIdArray);

	Nan::SetPrototypeMethod(tpl, "WriteAllTimeStepsOff", WriteAllTimeStepsOff);
	Nan::SetPrototypeMethod(tpl, "writeAllTimeStepsOff", WriteAllTimeStepsOff);

	Nan::SetPrototypeMethod(tpl, "WriteAllTimeStepsOn", WriteAllTimeStepsOn);
	Nan::SetPrototypeMethod(tpl, "writeAllTimeStepsOn", WriteAllTimeStepsOn);

	Nan::SetPrototypeMethod(tpl, "WriteOutBlockIdArrayOff", WriteOutBlockIdArrayOff);
	Nan::SetPrototypeMethod(tpl, "writeOutBlockIdArrayOff", WriteOutBlockIdArrayOff);

	Nan::SetPrototypeMethod(tpl, "WriteOutBlockIdArrayOn", WriteOutBlockIdArrayOn);
	Nan::SetPrototypeMethod(tpl, "writeOutBlockIdArrayOn", WriteOutBlockIdArrayOn);

	Nan::SetPrototypeMethod(tpl, "WriteOutGlobalElementIdArrayOff", WriteOutGlobalElementIdArrayOff);
	Nan::SetPrototypeMethod(tpl, "writeOutGlobalElementIdArrayOff", WriteOutGlobalElementIdArrayOff);

	Nan::SetPrototypeMethod(tpl, "WriteOutGlobalElementIdArrayOn", WriteOutGlobalElementIdArrayOn);
	Nan::SetPrototypeMethod(tpl, "writeOutGlobalElementIdArrayOn", WriteOutGlobalElementIdArrayOn);

	Nan::SetPrototypeMethod(tpl, "WriteOutGlobalNodeIdArrayOff", WriteOutGlobalNodeIdArrayOff);
	Nan::SetPrototypeMethod(tpl, "writeOutGlobalNodeIdArrayOff", WriteOutGlobalNodeIdArrayOff);

	Nan::SetPrototypeMethod(tpl, "WriteOutGlobalNodeIdArrayOn", WriteOutGlobalNodeIdArrayOn);
	Nan::SetPrototypeMethod(tpl, "writeOutGlobalNodeIdArrayOn", WriteOutGlobalNodeIdArrayOn);

	ptpl.Reset( tpl );
}

void VtkExodusIIWriterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkExodusIIWriter> native = vtkSmartPointer<vtkExodusIIWriter>::New();
		VtkExodusIIWriterWrap* obj = new VtkExodusIIWriterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkExodusIIWriterWrap::GetBlockIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusIIWriterWrap *wrapper = ObjectWrap::Unwrap<VtkExodusIIWriterWrap>(info.Holder());
	vtkExodusIIWriter *native = (vtkExodusIIWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBlockIdArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkExodusIIWriterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusIIWriterWrap *wrapper = ObjectWrap::Unwrap<VtkExodusIIWriterWrap>(info.Holder());
	vtkExodusIIWriter *native = (vtkExodusIIWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkExodusIIWriterWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusIIWriterWrap *wrapper = ObjectWrap::Unwrap<VtkExodusIIWriterWrap>(info.Holder());
	vtkExodusIIWriter *native = (vtkExodusIIWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkExodusIIWriterWrap::GetGhostLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusIIWriterWrap *wrapper = ObjectWrap::Unwrap<VtkExodusIIWriterWrap>(info.Holder());
	vtkExodusIIWriter *native = (vtkExodusIIWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGhostLevel();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExodusIIWriterWrap::GetModelMetadata(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusIIWriterWrap *wrapper = ObjectWrap::Unwrap<VtkExodusIIWriterWrap>(info.Holder());
	vtkExodusIIWriter *native = (vtkExodusIIWriter *)wrapper->native.GetPointer();
	vtkModelMetadata * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetModelMetadata();
		VtkModelMetadataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkModelMetadataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkModelMetadataWrap *w = new VtkModelMetadataWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExodusIIWriterWrap::GetStoreDoubles(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusIIWriterWrap *wrapper = ObjectWrap::Unwrap<VtkExodusIIWriterWrap>(info.Holder());
	vtkExodusIIWriter *native = (vtkExodusIIWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStoreDoubles();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExodusIIWriterWrap::GetWriteAllTimeSteps(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusIIWriterWrap *wrapper = ObjectWrap::Unwrap<VtkExodusIIWriterWrap>(info.Holder());
	vtkExodusIIWriter *native = (vtkExodusIIWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWriteAllTimeSteps();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExodusIIWriterWrap::GetWriteOutBlockIdArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusIIWriterWrap *wrapper = ObjectWrap::Unwrap<VtkExodusIIWriterWrap>(info.Holder());
	vtkExodusIIWriter *native = (vtkExodusIIWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWriteOutBlockIdArray();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExodusIIWriterWrap::GetWriteOutGlobalElementIdArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusIIWriterWrap *wrapper = ObjectWrap::Unwrap<VtkExodusIIWriterWrap>(info.Holder());
	vtkExodusIIWriter *native = (vtkExodusIIWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWriteOutGlobalElementIdArray();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExodusIIWriterWrap::GetWriteOutGlobalNodeIdArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusIIWriterWrap *wrapper = ObjectWrap::Unwrap<VtkExodusIIWriterWrap>(info.Holder());
	vtkExodusIIWriter *native = (vtkExodusIIWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWriteOutGlobalNodeIdArray();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExodusIIWriterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusIIWriterWrap *wrapper = ObjectWrap::Unwrap<VtkExodusIIWriterWrap>(info.Holder());
	vtkExodusIIWriter *native = (vtkExodusIIWriter *)wrapper->native.GetPointer();
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

void VtkExodusIIWriterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusIIWriterWrap *wrapper = ObjectWrap::Unwrap<VtkExodusIIWriterWrap>(info.Holder());
	vtkExodusIIWriter *native = (vtkExodusIIWriter *)wrapper->native.GetPointer();
	vtkExodusIIWriter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkExodusIIWriterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkExodusIIWriterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkExodusIIWriterWrap *w = new VtkExodusIIWriterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExodusIIWriterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusIIWriterWrap *wrapper = ObjectWrap::Unwrap<VtkExodusIIWriterWrap>(info.Holder());
	vtkExodusIIWriter *native = (vtkExodusIIWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkExodusIIWriter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkExodusIIWriterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkExodusIIWriterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkExodusIIWriterWrap *w = new VtkExodusIIWriterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExodusIIWriterWrap::SetBlockIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusIIWriterWrap *wrapper = ObjectWrap::Unwrap<VtkExodusIIWriterWrap>(info.Holder());
	vtkExodusIIWriter *native = (vtkExodusIIWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBlockIdArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExodusIIWriterWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusIIWriterWrap *wrapper = ObjectWrap::Unwrap<VtkExodusIIWriterWrap>(info.Holder());
	vtkExodusIIWriter *native = (vtkExodusIIWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFileName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExodusIIWriterWrap::SetGhostLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusIIWriterWrap *wrapper = ObjectWrap::Unwrap<VtkExodusIIWriterWrap>(info.Holder());
	vtkExodusIIWriter *native = (vtkExodusIIWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGhostLevel(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExodusIIWriterWrap::SetModelMetadata(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusIIWriterWrap *wrapper = ObjectWrap::Unwrap<VtkExodusIIWriterWrap>(info.Holder());
	vtkExodusIIWriter *native = (vtkExodusIIWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkModelMetadataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkModelMetadataWrap *a0 = ObjectWrap::Unwrap<VtkModelMetadataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetModelMetadata(
			(vtkModelMetadata *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExodusIIWriterWrap::SetStoreDoubles(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusIIWriterWrap *wrapper = ObjectWrap::Unwrap<VtkExodusIIWriterWrap>(info.Holder());
	vtkExodusIIWriter *native = (vtkExodusIIWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetStoreDoubles(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExodusIIWriterWrap::SetWriteAllTimeSteps(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusIIWriterWrap *wrapper = ObjectWrap::Unwrap<VtkExodusIIWriterWrap>(info.Holder());
	vtkExodusIIWriter *native = (vtkExodusIIWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWriteAllTimeSteps(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExodusIIWriterWrap::SetWriteOutBlockIdArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusIIWriterWrap *wrapper = ObjectWrap::Unwrap<VtkExodusIIWriterWrap>(info.Holder());
	vtkExodusIIWriter *native = (vtkExodusIIWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWriteOutBlockIdArray(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExodusIIWriterWrap::SetWriteOutGlobalElementIdArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusIIWriterWrap *wrapper = ObjectWrap::Unwrap<VtkExodusIIWriterWrap>(info.Holder());
	vtkExodusIIWriter *native = (vtkExodusIIWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWriteOutGlobalElementIdArray(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExodusIIWriterWrap::SetWriteOutGlobalNodeIdArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusIIWriterWrap *wrapper = ObjectWrap::Unwrap<VtkExodusIIWriterWrap>(info.Holder());
	vtkExodusIIWriter *native = (vtkExodusIIWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWriteOutGlobalNodeIdArray(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExodusIIWriterWrap::WriteAllTimeStepsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusIIWriterWrap *wrapper = ObjectWrap::Unwrap<VtkExodusIIWriterWrap>(info.Holder());
	vtkExodusIIWriter *native = (vtkExodusIIWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WriteAllTimeStepsOff();
}

void VtkExodusIIWriterWrap::WriteAllTimeStepsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusIIWriterWrap *wrapper = ObjectWrap::Unwrap<VtkExodusIIWriterWrap>(info.Holder());
	vtkExodusIIWriter *native = (vtkExodusIIWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WriteAllTimeStepsOn();
}

void VtkExodusIIWriterWrap::WriteOutBlockIdArrayOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusIIWriterWrap *wrapper = ObjectWrap::Unwrap<VtkExodusIIWriterWrap>(info.Holder());
	vtkExodusIIWriter *native = (vtkExodusIIWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WriteOutBlockIdArrayOff();
}

void VtkExodusIIWriterWrap::WriteOutBlockIdArrayOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusIIWriterWrap *wrapper = ObjectWrap::Unwrap<VtkExodusIIWriterWrap>(info.Holder());
	vtkExodusIIWriter *native = (vtkExodusIIWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WriteOutBlockIdArrayOn();
}

void VtkExodusIIWriterWrap::WriteOutGlobalElementIdArrayOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusIIWriterWrap *wrapper = ObjectWrap::Unwrap<VtkExodusIIWriterWrap>(info.Holder());
	vtkExodusIIWriter *native = (vtkExodusIIWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WriteOutGlobalElementIdArrayOff();
}

void VtkExodusIIWriterWrap::WriteOutGlobalElementIdArrayOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusIIWriterWrap *wrapper = ObjectWrap::Unwrap<VtkExodusIIWriterWrap>(info.Holder());
	vtkExodusIIWriter *native = (vtkExodusIIWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WriteOutGlobalElementIdArrayOn();
}

void VtkExodusIIWriterWrap::WriteOutGlobalNodeIdArrayOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusIIWriterWrap *wrapper = ObjectWrap::Unwrap<VtkExodusIIWriterWrap>(info.Holder());
	vtkExodusIIWriter *native = (vtkExodusIIWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WriteOutGlobalNodeIdArrayOff();
}

void VtkExodusIIWriterWrap::WriteOutGlobalNodeIdArrayOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusIIWriterWrap *wrapper = ObjectWrap::Unwrap<VtkExodusIIWriterWrap>(info.Holder());
	vtkExodusIIWriter *native = (vtkExodusIIWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WriteOutGlobalNodeIdArrayOn();
}

