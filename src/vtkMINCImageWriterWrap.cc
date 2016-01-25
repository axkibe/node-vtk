/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageWriterWrap.h"
#include "vtkMINCImageWriterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkMatrix4x4Wrap.h"
#include "vtkMINCImageAttributesWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkMINCImageWriterWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkMINCImageWriterWrap::ptpl;

VtkMINCImageWriterWrap::VtkMINCImageWriterWrap()
{ }

VtkMINCImageWriterWrap::VtkMINCImageWriterWrap(vtkSmartPointer<vtkMINCImageWriter> _native)
{ native = _native; }

VtkMINCImageWriterWrap::~VtkMINCImageWriterWrap()
{ }

void VtkMINCImageWriterWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageWriterWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageWriterWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkMINCImageWriterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkMINCImageWriter").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("MINCImageWriter").ToLocalChecked(),tpl->GetFunction());
}

void VtkMINCImageWriterWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDescriptiveName", GetDescriptiveName);
	Nan::SetPrototypeMethod(tpl, "getDescriptiveName", GetDescriptiveName);

	Nan::SetPrototypeMethod(tpl, "GetDirectionCosines", GetDirectionCosines);
	Nan::SetPrototypeMethod(tpl, "getDirectionCosines", GetDirectionCosines);

	Nan::SetPrototypeMethod(tpl, "GetFileExtensions", GetFileExtensions);
	Nan::SetPrototypeMethod(tpl, "getFileExtensions", GetFileExtensions);

	Nan::SetPrototypeMethod(tpl, "GetHistoryAddition", GetHistoryAddition);
	Nan::SetPrototypeMethod(tpl, "getHistoryAddition", GetHistoryAddition);

	Nan::SetPrototypeMethod(tpl, "GetImageAttributes", GetImageAttributes);
	Nan::SetPrototypeMethod(tpl, "getImageAttributes", GetImageAttributes);

	Nan::SetPrototypeMethod(tpl, "GetRescaleIntercept", GetRescaleIntercept);
	Nan::SetPrototypeMethod(tpl, "getRescaleIntercept", GetRescaleIntercept);

	Nan::SetPrototypeMethod(tpl, "GetRescaleSlope", GetRescaleSlope);
	Nan::SetPrototypeMethod(tpl, "getRescaleSlope", GetRescaleSlope);

	Nan::SetPrototypeMethod(tpl, "GetStrictValidation", GetStrictValidation);
	Nan::SetPrototypeMethod(tpl, "getStrictValidation", GetStrictValidation);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDirectionCosines", SetDirectionCosines);
	Nan::SetPrototypeMethod(tpl, "setDirectionCosines", SetDirectionCosines);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	Nan::SetPrototypeMethod(tpl, "SetHistoryAddition", SetHistoryAddition);
	Nan::SetPrototypeMethod(tpl, "setHistoryAddition", SetHistoryAddition);

	Nan::SetPrototypeMethod(tpl, "SetImageAttributes", SetImageAttributes);
	Nan::SetPrototypeMethod(tpl, "setImageAttributes", SetImageAttributes);

	Nan::SetPrototypeMethod(tpl, "SetRescaleIntercept", SetRescaleIntercept);
	Nan::SetPrototypeMethod(tpl, "setRescaleIntercept", SetRescaleIntercept);

	Nan::SetPrototypeMethod(tpl, "SetRescaleSlope", SetRescaleSlope);
	Nan::SetPrototypeMethod(tpl, "setRescaleSlope", SetRescaleSlope);

	Nan::SetPrototypeMethod(tpl, "SetStrictValidation", SetStrictValidation);
	Nan::SetPrototypeMethod(tpl, "setStrictValidation", SetStrictValidation);

	Nan::SetPrototypeMethod(tpl, "StrictValidationOff", StrictValidationOff);
	Nan::SetPrototypeMethod(tpl, "strictValidationOff", StrictValidationOff);

	Nan::SetPrototypeMethod(tpl, "StrictValidationOn", StrictValidationOn);
	Nan::SetPrototypeMethod(tpl, "strictValidationOn", StrictValidationOn);

	Nan::SetPrototypeMethod(tpl, "Write", Write);
	Nan::SetPrototypeMethod(tpl, "write", Write);

}

void VtkMINCImageWriterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkMINCImageWriter> native = vtkSmartPointer<vtkMINCImageWriter>::New();
		VtkMINCImageWriterWrap* obj = new VtkMINCImageWriterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkMINCImageWriterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMINCImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMINCImageWriterWrap>(info.Holder());
	vtkMINCImageWriter *native = (vtkMINCImageWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMINCImageWriterWrap::GetDescriptiveName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMINCImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMINCImageWriterWrap>(info.Holder());
	vtkMINCImageWriter *native = (vtkMINCImageWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDescriptiveName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMINCImageWriterWrap::GetDirectionCosines(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMINCImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMINCImageWriterWrap>(info.Holder());
	vtkMINCImageWriter *native = (vtkMINCImageWriter *)wrapper->native.GetPointer();
	vtkMatrix4x4 * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDirectionCosines();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkMatrix4x4Wrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMatrix4x4Wrap *w = new VtkMatrix4x4Wrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMINCImageWriterWrap::GetFileExtensions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMINCImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMINCImageWriterWrap>(info.Holder());
	vtkMINCImageWriter *native = (vtkMINCImageWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileExtensions();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMINCImageWriterWrap::GetHistoryAddition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMINCImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMINCImageWriterWrap>(info.Holder());
	vtkMINCImageWriter *native = (vtkMINCImageWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHistoryAddition();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMINCImageWriterWrap::GetImageAttributes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMINCImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMINCImageWriterWrap>(info.Holder());
	vtkMINCImageWriter *native = (vtkMINCImageWriter *)wrapper->native.GetPointer();
	vtkMINCImageAttributes * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetImageAttributes();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkMINCImageAttributesWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMINCImageAttributesWrap *w = new VtkMINCImageAttributesWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMINCImageWriterWrap::GetRescaleIntercept(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMINCImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMINCImageWriterWrap>(info.Holder());
	vtkMINCImageWriter *native = (vtkMINCImageWriter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRescaleIntercept();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMINCImageWriterWrap::GetRescaleSlope(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMINCImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMINCImageWriterWrap>(info.Holder());
	vtkMINCImageWriter *native = (vtkMINCImageWriter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRescaleSlope();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMINCImageWriterWrap::GetStrictValidation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMINCImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMINCImageWriterWrap>(info.Holder());
	vtkMINCImageWriter *native = (vtkMINCImageWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStrictValidation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMINCImageWriterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMINCImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMINCImageWriterWrap>(info.Holder());
	vtkMINCImageWriter *native = (vtkMINCImageWriter *)wrapper->native.GetPointer();
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

void VtkMINCImageWriterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMINCImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMINCImageWriterWrap>(info.Holder());
	vtkMINCImageWriter *native = (vtkMINCImageWriter *)wrapper->native.GetPointer();
	vtkMINCImageWriter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkMINCImageWriterWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMINCImageWriterWrap *w = new VtkMINCImageWriterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMINCImageWriterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMINCImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMINCImageWriterWrap>(info.Holder());
	vtkMINCImageWriter *native = (vtkMINCImageWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkMINCImageWriter * r;
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
			Nan::New<v8::Function>(VtkMINCImageWriterWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMINCImageWriterWrap *w = new VtkMINCImageWriterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMINCImageWriterWrap::SetDirectionCosines(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMINCImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMINCImageWriterWrap>(info.Holder());
	vtkMINCImageWriter *native = (vtkMINCImageWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkMatrix4x4Wrap *a0 = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDirectionCosines(
			(vtkMatrix4x4 *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMINCImageWriterWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMINCImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMINCImageWriterWrap>(info.Holder());
	vtkMINCImageWriter *native = (vtkMINCImageWriter *)wrapper->native.GetPointer();
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

void VtkMINCImageWriterWrap::SetHistoryAddition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMINCImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMINCImageWriterWrap>(info.Holder());
	vtkMINCImageWriter *native = (vtkMINCImageWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHistoryAddition(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMINCImageWriterWrap::SetImageAttributes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMINCImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMINCImageWriterWrap>(info.Holder());
	vtkMINCImageWriter *native = (vtkMINCImageWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkMINCImageAttributesWrap *a0 = ObjectWrap::Unwrap<VtkMINCImageAttributesWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetImageAttributes(
			(vtkMINCImageAttributes *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMINCImageWriterWrap::SetRescaleIntercept(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMINCImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMINCImageWriterWrap>(info.Holder());
	vtkMINCImageWriter *native = (vtkMINCImageWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRescaleIntercept(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMINCImageWriterWrap::SetRescaleSlope(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMINCImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMINCImageWriterWrap>(info.Holder());
	vtkMINCImageWriter *native = (vtkMINCImageWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRescaleSlope(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMINCImageWriterWrap::SetStrictValidation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMINCImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMINCImageWriterWrap>(info.Holder());
	vtkMINCImageWriter *native = (vtkMINCImageWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetStrictValidation(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMINCImageWriterWrap::StrictValidationOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMINCImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMINCImageWriterWrap>(info.Holder());
	vtkMINCImageWriter *native = (vtkMINCImageWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->StrictValidationOff();
}

void VtkMINCImageWriterWrap::StrictValidationOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMINCImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMINCImageWriterWrap>(info.Holder());
	vtkMINCImageWriter *native = (vtkMINCImageWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->StrictValidationOn();
}

void VtkMINCImageWriterWrap::Write(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMINCImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMINCImageWriterWrap>(info.Holder());
	vtkMINCImageWriter *native = (vtkMINCImageWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Write();
}

