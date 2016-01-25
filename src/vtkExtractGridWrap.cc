/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkStructuredGridAlgorithmWrap.h"
#include "vtkExtractGridWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkExtractGridWrap::constructor;

VtkExtractGridWrap::VtkExtractGridWrap()
{ }

VtkExtractGridWrap::VtkExtractGridWrap(vtkSmartPointer<vtkExtractGrid> _native)
{ native = _native; }

VtkExtractGridWrap::~VtkExtractGridWrap()
{ }

void VtkExtractGridWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkExtractGridWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAlgorithmWrap::InitTpl(tpl);
	VtkStructuredGridAlgorithmWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkExtractGrid").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ExtractGrid").ToLocalChecked(),tpl->GetFunction());
}

void VtkExtractGridWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetIncludeBoundary", GetIncludeBoundary);
	Nan::SetPrototypeMethod(tpl, "getIncludeBoundary", GetIncludeBoundary);

	Nan::SetPrototypeMethod(tpl, "IncludeBoundaryOff", IncludeBoundaryOff);
	Nan::SetPrototypeMethod(tpl, "includeBoundaryOff", IncludeBoundaryOff);

	Nan::SetPrototypeMethod(tpl, "IncludeBoundaryOn", IncludeBoundaryOn);
	Nan::SetPrototypeMethod(tpl, "includeBoundaryOn", IncludeBoundaryOn);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetIncludeBoundary", SetIncludeBoundary);
	Nan::SetPrototypeMethod(tpl, "setIncludeBoundary", SetIncludeBoundary);

	Nan::SetPrototypeMethod(tpl, "SetSampleRate", SetSampleRate);
	Nan::SetPrototypeMethod(tpl, "setSampleRate", SetSampleRate);

	Nan::SetPrototypeMethod(tpl, "SetVOI", SetVOI);
	Nan::SetPrototypeMethod(tpl, "setVOI", SetVOI);

}

void VtkExtractGridWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkExtractGrid> native = vtkSmartPointer<vtkExtractGrid>::New();
		VtkExtractGridWrap* obj = new VtkExtractGridWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkExtractGridWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractGridWrap>(info.Holder());
	vtkExtractGrid *native = (vtkExtractGrid *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkExtractGridWrap::GetIncludeBoundary(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractGridWrap>(info.Holder());
	vtkExtractGrid *native = (vtkExtractGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIncludeBoundary();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtractGridWrap::IncludeBoundaryOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractGridWrap>(info.Holder());
	vtkExtractGrid *native = (vtkExtractGrid *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->IncludeBoundaryOff();
}

void VtkExtractGridWrap::IncludeBoundaryOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractGridWrap>(info.Holder());
	vtkExtractGrid *native = (vtkExtractGrid *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->IncludeBoundaryOn();
}

void VtkExtractGridWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractGridWrap>(info.Holder());
	vtkExtractGrid *native = (vtkExtractGrid *)wrapper->native.GetPointer();
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

void VtkExtractGridWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractGridWrap>(info.Holder());
	vtkExtractGrid *native = (vtkExtractGrid *)wrapper->native.GetPointer();
	vtkExtractGrid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkExtractGridWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkExtractGridWrap *w = new VtkExtractGridWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExtractGridWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractGridWrap>(info.Holder());
	vtkExtractGrid *native = (vtkExtractGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkExtractGrid * r;
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
			Nan::New<v8::Function>(VtkExtractGridWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkExtractGridWrap *w = new VtkExtractGridWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractGridWrap::SetIncludeBoundary(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractGridWrap>(info.Holder());
	vtkExtractGrid *native = (vtkExtractGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetIncludeBoundary(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractGridWrap::SetSampleRate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractGridWrap>(info.Holder());
	vtkExtractGrid *native = (vtkExtractGrid *)wrapper->native.GetPointer();
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
				native->SetSampleRate(
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

void VtkExtractGridWrap::SetVOI(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractGridWrap>(info.Holder());
	vtkExtractGrid *native = (vtkExtractGrid *)wrapper->native.GetPointer();
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
							native->SetVOI(
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

