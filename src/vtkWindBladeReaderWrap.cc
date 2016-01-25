/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkStructuredGridAlgorithmWrap.h"
#include "vtkWindBladeReaderWrap.h"
#include "vtkObjectWrap.h"
#include "vtkStructuredGridWrap.h"
#include "vtkUnstructuredGridWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkWindBladeReaderWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkWindBladeReaderWrap::ptpl;

VtkWindBladeReaderWrap::VtkWindBladeReaderWrap()
{ }

VtkWindBladeReaderWrap::VtkWindBladeReaderWrap(vtkSmartPointer<vtkWindBladeReader> _native)
{ native = _native; }

VtkWindBladeReaderWrap::~VtkWindBladeReaderWrap()
{ }

void VtkWindBladeReaderWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkStructuredGridAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkStructuredGridAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkWindBladeReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkWindBladeReader").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("WindBladeReader").ToLocalChecked(),tpl->GetFunction());
}

void VtkWindBladeReaderWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "DisableAllPointArrays", DisableAllPointArrays);
	Nan::SetPrototypeMethod(tpl, "disableAllPointArrays", DisableAllPointArrays);

	Nan::SetPrototypeMethod(tpl, "EnableAllPointArrays", EnableAllPointArrays);
	Nan::SetPrototypeMethod(tpl, "enableAllPointArrays", EnableAllPointArrays);

	Nan::SetPrototypeMethod(tpl, "GetBladeOutput", GetBladeOutput);
	Nan::SetPrototypeMethod(tpl, "getBladeOutput", GetBladeOutput);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFieldOutput", GetFieldOutput);
	Nan::SetPrototypeMethod(tpl, "getFieldOutput", GetFieldOutput);

	Nan::SetPrototypeMethod(tpl, "GetFilename", GetFilename);
	Nan::SetPrototypeMethod(tpl, "getFilename", GetFilename);

	Nan::SetPrototypeMethod(tpl, "GetGroundOutput", GetGroundOutput);
	Nan::SetPrototypeMethod(tpl, "getGroundOutput", GetGroundOutput);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfPointArrays", GetNumberOfPointArrays);
	Nan::SetPrototypeMethod(tpl, "getNumberOfPointArrays", GetNumberOfPointArrays);

	Nan::SetPrototypeMethod(tpl, "GetPointArrayName", GetPointArrayName);
	Nan::SetPrototypeMethod(tpl, "getPointArrayName", GetPointArrayName);

	Nan::SetPrototypeMethod(tpl, "GetPointArrayStatus", GetPointArrayStatus);
	Nan::SetPrototypeMethod(tpl, "getPointArrayStatus", GetPointArrayStatus);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetFilename", SetFilename);
	Nan::SetPrototypeMethod(tpl, "setFilename", SetFilename);

	Nan::SetPrototypeMethod(tpl, "SetPointArrayStatus", SetPointArrayStatus);
	Nan::SetPrototypeMethod(tpl, "setPointArrayStatus", SetPointArrayStatus);

	Nan::SetPrototypeMethod(tpl, "SetSubExtent", SetSubExtent);
	Nan::SetPrototypeMethod(tpl, "setSubExtent", SetSubExtent);

	Nan::SetPrototypeMethod(tpl, "SetWholeExtent", SetWholeExtent);
	Nan::SetPrototypeMethod(tpl, "setWholeExtent", SetWholeExtent);

}

void VtkWindBladeReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkWindBladeReader> native = vtkSmartPointer<vtkWindBladeReader>::New();
		VtkWindBladeReaderWrap* obj = new VtkWindBladeReaderWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkWindBladeReaderWrap::DisableAllPointArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindBladeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkWindBladeReaderWrap>(info.Holder());
	vtkWindBladeReader *native = (vtkWindBladeReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DisableAllPointArrays();
}

void VtkWindBladeReaderWrap::EnableAllPointArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindBladeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkWindBladeReaderWrap>(info.Holder());
	vtkWindBladeReader *native = (vtkWindBladeReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EnableAllPointArrays();
}

void VtkWindBladeReaderWrap::GetBladeOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindBladeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkWindBladeReaderWrap>(info.Holder());
	vtkWindBladeReader *native = (vtkWindBladeReader *)wrapper->native.GetPointer();
	vtkUnstructuredGrid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBladeOutput();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkUnstructuredGridWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkUnstructuredGridWrap *w = new VtkUnstructuredGridWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkWindBladeReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindBladeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkWindBladeReaderWrap>(info.Holder());
	vtkWindBladeReader *native = (vtkWindBladeReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkWindBladeReaderWrap::GetFieldOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindBladeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkWindBladeReaderWrap>(info.Holder());
	vtkWindBladeReader *native = (vtkWindBladeReader *)wrapper->native.GetPointer();
	vtkStructuredGrid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFieldOutput();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkStructuredGridWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStructuredGridWrap *w = new VtkStructuredGridWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkWindBladeReaderWrap::GetFilename(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindBladeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkWindBladeReaderWrap>(info.Holder());
	vtkWindBladeReader *native = (vtkWindBladeReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFilename();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkWindBladeReaderWrap::GetGroundOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindBladeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkWindBladeReaderWrap>(info.Holder());
	vtkWindBladeReader *native = (vtkWindBladeReader *)wrapper->native.GetPointer();
	vtkStructuredGrid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGroundOutput();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkStructuredGridWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStructuredGridWrap *w = new VtkStructuredGridWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkWindBladeReaderWrap::GetNumberOfPointArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindBladeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkWindBladeReaderWrap>(info.Holder());
	vtkWindBladeReader *native = (vtkWindBladeReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfPointArrays();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWindBladeReaderWrap::GetPointArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindBladeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkWindBladeReaderWrap>(info.Holder());
	vtkWindBladeReader *native = (vtkWindBladeReader *)wrapper->native.GetPointer();
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

void VtkWindBladeReaderWrap::GetPointArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindBladeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkWindBladeReaderWrap>(info.Holder());
	vtkWindBladeReader *native = (vtkWindBladeReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
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

void VtkWindBladeReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindBladeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkWindBladeReaderWrap>(info.Holder());
	vtkWindBladeReader *native = (vtkWindBladeReader *)wrapper->native.GetPointer();
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

void VtkWindBladeReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindBladeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkWindBladeReaderWrap>(info.Holder());
	vtkWindBladeReader *native = (vtkWindBladeReader *)wrapper->native.GetPointer();
	vtkWindBladeReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkWindBladeReaderWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkWindBladeReaderWrap *w = new VtkWindBladeReaderWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkWindBladeReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindBladeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkWindBladeReaderWrap>(info.Holder());
	vtkWindBladeReader *native = (vtkWindBladeReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkWindBladeReader * r;
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
			Nan::New<v8::Function>(VtkWindBladeReaderWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkWindBladeReaderWrap *w = new VtkWindBladeReaderWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWindBladeReaderWrap::SetFilename(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindBladeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkWindBladeReaderWrap>(info.Holder());
	vtkWindBladeReader *native = (vtkWindBladeReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFilename(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWindBladeReaderWrap::SetPointArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindBladeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkWindBladeReaderWrap>(info.Holder());
	vtkWindBladeReader *native = (vtkWindBladeReader *)wrapper->native.GetPointer();
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
			native->SetPointArrayStatus(
				*a0,
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWindBladeReaderWrap::SetSubExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindBladeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkWindBladeReaderWrap>(info.Holder());
	vtkWindBladeReader *native = (vtkWindBladeReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() > 4 && info[4]->IsInt32())
					{
						if(info.Length() > 5 && info[5]->IsInt32())
						{
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->SetSubExtent(
								info[0]->Int32Value(),
								info[1]->Int32Value(),
								info[2]->Int32Value(),
								info[3]->Int32Value(),
								info[4]->Int32Value(),
								info[5]->Int32Value()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWindBladeReaderWrap::SetWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindBladeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkWindBladeReaderWrap>(info.Holder());
	vtkWindBladeReader *native = (vtkWindBladeReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() > 4 && info[4]->IsInt32())
					{
						if(info.Length() > 5 && info[5]->IsInt32())
						{
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->SetWholeExtent(
								info[0]->Int32Value(),
								info[1]->Int32Value(),
								info[2]->Int32Value(),
								info[3]->Int32Value(),
								info[4]->Int32Value(),
								info[5]->Int32Value()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

