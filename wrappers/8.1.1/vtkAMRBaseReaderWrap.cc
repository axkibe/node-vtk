/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkOverlappingAMRAlgorithmWrap.h"
#include "vtkAMRBaseReaderWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkMultiProcessControllerWrap.h"
#include "vtkDataArraySelectionWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkAMRBaseReaderWrap::ptpl;

VtkAMRBaseReaderWrap::VtkAMRBaseReaderWrap()
{ }

VtkAMRBaseReaderWrap::VtkAMRBaseReaderWrap(vtkSmartPointer<vtkAMRBaseReader> _native)
{ native = _native; }

VtkAMRBaseReaderWrap::~VtkAMRBaseReaderWrap()
{ }

void VtkAMRBaseReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAMRBaseReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AMRBaseReader").ToLocalChecked(), ConstructorGetter);
}

void VtkAMRBaseReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAMRBaseReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkOverlappingAMRAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkOverlappingAMRAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAMRBaseReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "EnableCachingOff", EnableCachingOff);
	Nan::SetPrototypeMethod(tpl, "enableCachingOff", EnableCachingOff);

	Nan::SetPrototypeMethod(tpl, "EnableCachingOn", EnableCachingOn);
	Nan::SetPrototypeMethod(tpl, "enableCachingOn", EnableCachingOn);

	Nan::SetPrototypeMethod(tpl, "GetCellArrayName", GetCellArrayName);
	Nan::SetPrototypeMethod(tpl, "getCellArrayName", GetCellArrayName);

	Nan::SetPrototypeMethod(tpl, "GetCellArrayStatus", GetCellArrayStatus);
	Nan::SetPrototypeMethod(tpl, "getCellArrayStatus", GetCellArrayStatus);

	Nan::SetPrototypeMethod(tpl, "GetCellDataArraySelection", GetCellDataArraySelection);
	Nan::SetPrototypeMethod(tpl, "getCellDataArraySelection", GetCellDataArraySelection);

	Nan::SetPrototypeMethod(tpl, "GetController", GetController);
	Nan::SetPrototypeMethod(tpl, "getController", GetController);

	Nan::SetPrototypeMethod(tpl, "GetEnableCaching", GetEnableCaching);
	Nan::SetPrototypeMethod(tpl, "getEnableCaching", GetEnableCaching);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfCellArrays", GetNumberOfCellArrays);
	Nan::SetPrototypeMethod(tpl, "getNumberOfCellArrays", GetNumberOfCellArrays);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfPointArrays", GetNumberOfPointArrays);
	Nan::SetPrototypeMethod(tpl, "getNumberOfPointArrays", GetNumberOfPointArrays);

	Nan::SetPrototypeMethod(tpl, "GetPointArrayName", GetPointArrayName);
	Nan::SetPrototypeMethod(tpl, "getPointArrayName", GetPointArrayName);

	Nan::SetPrototypeMethod(tpl, "GetPointArrayStatus", GetPointArrayStatus);
	Nan::SetPrototypeMethod(tpl, "getPointArrayStatus", GetPointArrayStatus);

	Nan::SetPrototypeMethod(tpl, "GetPointDataArraySelection", GetPointDataArraySelection);
	Nan::SetPrototypeMethod(tpl, "getPointDataArraySelection", GetPointDataArraySelection);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsCachingEnabled", IsCachingEnabled);
	Nan::SetPrototypeMethod(tpl, "isCachingEnabled", IsCachingEnabled);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCellArrayStatus", SetCellArrayStatus);
	Nan::SetPrototypeMethod(tpl, "setCellArrayStatus", SetCellArrayStatus);

	Nan::SetPrototypeMethod(tpl, "SetController", SetController);
	Nan::SetPrototypeMethod(tpl, "setController", SetController);

	Nan::SetPrototypeMethod(tpl, "SetEnableCaching", SetEnableCaching);
	Nan::SetPrototypeMethod(tpl, "setEnableCaching", SetEnableCaching);

	Nan::SetPrototypeMethod(tpl, "SetMaxLevel", SetMaxLevel);
	Nan::SetPrototypeMethod(tpl, "setMaxLevel", SetMaxLevel);

	Nan::SetPrototypeMethod(tpl, "SetPointArrayStatus", SetPointArrayStatus);
	Nan::SetPrototypeMethod(tpl, "setPointArrayStatus", SetPointArrayStatus);

#ifdef VTK_NODE_PLUS_VTKAMRBASEREADERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKAMRBASEREADERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkAMRBaseReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
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

void VtkAMRBaseReaderWrap::EnableCachingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRBaseReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRBaseReaderWrap>(info.Holder());
	vtkAMRBaseReader *native = (vtkAMRBaseReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EnableCachingOff();
}

void VtkAMRBaseReaderWrap::EnableCachingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRBaseReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRBaseReaderWrap>(info.Holder());
	vtkAMRBaseReader *native = (vtkAMRBaseReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EnableCachingOn();
}

void VtkAMRBaseReaderWrap::GetCellArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRBaseReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRBaseReaderWrap>(info.Holder());
	vtkAMRBaseReader *native = (vtkAMRBaseReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetCellArrayName(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRBaseReaderWrap::GetCellArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRBaseReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRBaseReaderWrap>(info.Holder());
	vtkAMRBaseReader *native = (vtkAMRBaseReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetCellArrayStatus(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRBaseReaderWrap::GetCellDataArraySelection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRBaseReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRBaseReaderWrap>(info.Holder());
	vtkAMRBaseReader *native = (vtkAMRBaseReader *)wrapper->native.GetPointer();
	vtkDataArraySelection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellDataArraySelection();
	VtkDataArraySelectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataArraySelectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataArraySelectionWrap *w = new VtkDataArraySelectionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAMRBaseReaderWrap::GetController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRBaseReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRBaseReaderWrap>(info.Holder());
	vtkAMRBaseReader *native = (vtkAMRBaseReader *)wrapper->native.GetPointer();
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

void VtkAMRBaseReaderWrap::GetEnableCaching(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRBaseReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRBaseReaderWrap>(info.Holder());
	vtkAMRBaseReader *native = (vtkAMRBaseReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEnableCaching();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAMRBaseReaderWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRBaseReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRBaseReaderWrap>(info.Holder());
	vtkAMRBaseReader *native = (vtkAMRBaseReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAMRBaseReaderWrap::GetNumberOfCellArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRBaseReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRBaseReaderWrap>(info.Holder());
	vtkAMRBaseReader *native = (vtkAMRBaseReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfCellArrays();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAMRBaseReaderWrap::GetNumberOfPointArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRBaseReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRBaseReaderWrap>(info.Holder());
	vtkAMRBaseReader *native = (vtkAMRBaseReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfPointArrays();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAMRBaseReaderWrap::GetPointArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRBaseReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRBaseReaderWrap>(info.Holder());
	vtkAMRBaseReader *native = (vtkAMRBaseReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetPointArrayName(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRBaseReaderWrap::GetPointArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRBaseReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRBaseReaderWrap>(info.Holder());
	vtkAMRBaseReader *native = (vtkAMRBaseReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetPointArrayStatus(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRBaseReaderWrap::GetPointDataArraySelection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRBaseReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRBaseReaderWrap>(info.Holder());
	vtkAMRBaseReader *native = (vtkAMRBaseReader *)wrapper->native.GetPointer();
	vtkDataArraySelection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPointDataArraySelection();
	VtkDataArraySelectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataArraySelectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataArraySelectionWrap *w = new VtkDataArraySelectionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAMRBaseReaderWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRBaseReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRBaseReaderWrap>(info.Holder());
	vtkAMRBaseReader *native = (vtkAMRBaseReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkAMRBaseReaderWrap::IsCachingEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRBaseReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRBaseReaderWrap>(info.Holder());
	vtkAMRBaseReader *native = (vtkAMRBaseReader *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsCachingEnabled();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAMRBaseReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRBaseReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRBaseReaderWrap>(info.Holder());
	vtkAMRBaseReader *native = (vtkAMRBaseReader *)wrapper->native.GetPointer();
	vtkAMRBaseReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkAMRBaseReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAMRBaseReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAMRBaseReaderWrap *w = new VtkAMRBaseReaderWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAMRBaseReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRBaseReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRBaseReaderWrap>(info.Holder());
	vtkAMRBaseReader *native = (vtkAMRBaseReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkAMRBaseReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkAMRBaseReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAMRBaseReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAMRBaseReaderWrap *w = new VtkAMRBaseReaderWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRBaseReaderWrap::SetCellArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRBaseReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRBaseReaderWrap>(info.Holder());
	vtkAMRBaseReader *native = (vtkAMRBaseReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetCellArrayStatus(
				*a0,
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRBaseReaderWrap::SetController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRBaseReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRBaseReaderWrap>(info.Holder());
	vtkAMRBaseReader *native = (vtkAMRBaseReader *)wrapper->native.GetPointer();
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

void VtkAMRBaseReaderWrap::SetEnableCaching(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRBaseReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRBaseReaderWrap>(info.Holder());
	vtkAMRBaseReader *native = (vtkAMRBaseReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEnableCaching(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRBaseReaderWrap::SetMaxLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRBaseReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRBaseReaderWrap>(info.Holder());
	vtkAMRBaseReader *native = (vtkAMRBaseReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaxLevel(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRBaseReaderWrap::SetPointArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRBaseReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRBaseReaderWrap>(info.Holder());
	vtkAMRBaseReader *native = (vtkAMRBaseReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetPointArrayStatus(
				*a0,
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

