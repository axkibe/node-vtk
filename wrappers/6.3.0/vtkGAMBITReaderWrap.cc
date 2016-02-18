/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "vtkGAMBITReaderWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGAMBITReaderWrap::ptpl;

VtkGAMBITReaderWrap::VtkGAMBITReaderWrap()
{ }

VtkGAMBITReaderWrap::VtkGAMBITReaderWrap(vtkSmartPointer<vtkGAMBITReader> _native)
{ native = _native; }

VtkGAMBITReaderWrap::~VtkGAMBITReaderWrap()
{ }

void VtkGAMBITReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGAMBITReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GAMBITReader").ToLocalChecked(), ConstructorGetter);
}

void VtkGAMBITReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGAMBITReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkUnstructuredGridAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkUnstructuredGridAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGAMBITReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfCellFields", GetNumberOfCellFields);
	Nan::SetPrototypeMethod(tpl, "getNumberOfCellFields", GetNumberOfCellFields);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfCells", GetNumberOfCells);
	Nan::SetPrototypeMethod(tpl, "getNumberOfCells", GetNumberOfCells);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfNodeFields", GetNumberOfNodeFields);
	Nan::SetPrototypeMethod(tpl, "getNumberOfNodeFields", GetNumberOfNodeFields);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfNodes", GetNumberOfNodes);
	Nan::SetPrototypeMethod(tpl, "getNumberOfNodes", GetNumberOfNodes);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

#ifdef VTK_NODE_PLUS_VTKGAMBITREADERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKGAMBITREADERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkGAMBITReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGAMBITReader> native = vtkSmartPointer<vtkGAMBITReader>::New();
		VtkGAMBITReaderWrap* obj = new VtkGAMBITReaderWrap(native);
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

void VtkGAMBITReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGAMBITReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGAMBITReaderWrap>(info.Holder());
	vtkGAMBITReader *native = (vtkGAMBITReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGAMBITReaderWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGAMBITReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGAMBITReaderWrap>(info.Holder());
	vtkGAMBITReader *native = (vtkGAMBITReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGAMBITReaderWrap::GetNumberOfCellFields(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGAMBITReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGAMBITReaderWrap>(info.Holder());
	vtkGAMBITReader *native = (vtkGAMBITReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfCellFields();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGAMBITReaderWrap::GetNumberOfCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGAMBITReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGAMBITReaderWrap>(info.Holder());
	vtkGAMBITReader *native = (vtkGAMBITReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfCells();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGAMBITReaderWrap::GetNumberOfNodeFields(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGAMBITReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGAMBITReaderWrap>(info.Holder());
	vtkGAMBITReader *native = (vtkGAMBITReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfNodeFields();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGAMBITReaderWrap::GetNumberOfNodes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGAMBITReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGAMBITReaderWrap>(info.Holder());
	vtkGAMBITReader *native = (vtkGAMBITReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfNodes();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGAMBITReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGAMBITReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGAMBITReaderWrap>(info.Holder());
	vtkGAMBITReader *native = (vtkGAMBITReader *)wrapper->native.GetPointer();
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

void VtkGAMBITReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGAMBITReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGAMBITReaderWrap>(info.Holder());
	vtkGAMBITReader *native = (vtkGAMBITReader *)wrapper->native.GetPointer();
	vtkGAMBITReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkGAMBITReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGAMBITReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGAMBITReaderWrap *w = new VtkGAMBITReaderWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGAMBITReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGAMBITReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGAMBITReaderWrap>(info.Holder());
	vtkGAMBITReader *native = (vtkGAMBITReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGAMBITReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkGAMBITReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGAMBITReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGAMBITReaderWrap *w = new VtkGAMBITReaderWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGAMBITReaderWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGAMBITReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGAMBITReaderWrap>(info.Holder());
	vtkGAMBITReader *native = (vtkGAMBITReader *)wrapper->native.GetPointer();
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

