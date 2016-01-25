/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkRectilinearGridAlgorithmWrap.h"
#include "vtkNetCDFPOPReaderWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkNetCDFPOPReaderWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkNetCDFPOPReaderWrap::ptpl;

VtkNetCDFPOPReaderWrap::VtkNetCDFPOPReaderWrap()
{ }

VtkNetCDFPOPReaderWrap::VtkNetCDFPOPReaderWrap(vtkSmartPointer<vtkNetCDFPOPReader> _native)
{ native = _native; }

VtkNetCDFPOPReaderWrap::~VtkNetCDFPOPReaderWrap()
{ }

void VtkNetCDFPOPReaderWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkRectilinearGridAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkRectilinearGridAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkNetCDFPOPReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkNetCDFPOPReader").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("NetCDFPOPReader").ToLocalChecked(),tpl->GetFunction());
}

void VtkNetCDFPOPReaderWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfVariableArrays", GetNumberOfVariableArrays);
	Nan::SetPrototypeMethod(tpl, "getNumberOfVariableArrays", GetNumberOfVariableArrays);

	Nan::SetPrototypeMethod(tpl, "GetVariableArrayName", GetVariableArrayName);
	Nan::SetPrototypeMethod(tpl, "getVariableArrayName", GetVariableArrayName);

	Nan::SetPrototypeMethod(tpl, "GetVariableArrayStatus", GetVariableArrayStatus);
	Nan::SetPrototypeMethod(tpl, "getVariableArrayStatus", GetVariableArrayStatus);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	Nan::SetPrototypeMethod(tpl, "SetStride", SetStride);
	Nan::SetPrototypeMethod(tpl, "setStride", SetStride);

	Nan::SetPrototypeMethod(tpl, "SetVariableArrayStatus", SetVariableArrayStatus);
	Nan::SetPrototypeMethod(tpl, "setVariableArrayStatus", SetVariableArrayStatus);

}

void VtkNetCDFPOPReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkNetCDFPOPReader> native = vtkSmartPointer<vtkNetCDFPOPReader>::New();
		VtkNetCDFPOPReaderWrap* obj = new VtkNetCDFPOPReaderWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkNetCDFPOPReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFPOPReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFPOPReaderWrap>(info.Holder());
	vtkNetCDFPOPReader *native = (vtkNetCDFPOPReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkNetCDFPOPReaderWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFPOPReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFPOPReaderWrap>(info.Holder());
	vtkNetCDFPOPReader *native = (vtkNetCDFPOPReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkNetCDFPOPReaderWrap::GetNumberOfVariableArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFPOPReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFPOPReaderWrap>(info.Holder());
	vtkNetCDFPOPReader *native = (vtkNetCDFPOPReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfVariableArrays();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkNetCDFPOPReaderWrap::GetVariableArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFPOPReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFPOPReaderWrap>(info.Holder());
	vtkNetCDFPOPReader *native = (vtkNetCDFPOPReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetVariableArrayName(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkNetCDFPOPReaderWrap::GetVariableArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFPOPReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFPOPReaderWrap>(info.Holder());
	vtkNetCDFPOPReader *native = (vtkNetCDFPOPReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetVariableArrayStatus(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkNetCDFPOPReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFPOPReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFPOPReaderWrap>(info.Holder());
	vtkNetCDFPOPReader *native = (vtkNetCDFPOPReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
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

void VtkNetCDFPOPReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFPOPReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFPOPReaderWrap>(info.Holder());
	vtkNetCDFPOPReader *native = (vtkNetCDFPOPReader *)wrapper->native.GetPointer();
	vtkNetCDFPOPReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkNetCDFPOPReaderWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkNetCDFPOPReaderWrap *w = new VtkNetCDFPOPReaderWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkNetCDFPOPReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFPOPReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFPOPReaderWrap>(info.Holder());
	vtkNetCDFPOPReader *native = (vtkNetCDFPOPReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkNetCDFPOPReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkNetCDFPOPReaderWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkNetCDFPOPReaderWrap *w = new VtkNetCDFPOPReaderWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkNetCDFPOPReaderWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFPOPReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFPOPReaderWrap>(info.Holder());
	vtkNetCDFPOPReader *native = (vtkNetCDFPOPReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
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

void VtkNetCDFPOPReaderWrap::SetStride(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFPOPReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFPOPReaderWrap>(info.Holder());
	vtkNetCDFPOPReader *native = (vtkNetCDFPOPReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetStride(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkNetCDFPOPReaderWrap::SetVariableArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFPOPReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFPOPReaderWrap>(info.Holder());
	vtkNetCDFPOPReader *native = (vtkNetCDFPOPReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetVariableArrayStatus(
				*a0,
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

