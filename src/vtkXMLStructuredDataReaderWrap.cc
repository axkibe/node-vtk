/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkXMLDataReaderWrap.h"
#include "vtkXMLStructuredDataReaderWrap.h"
#include "vtkObjectWrap.h"
#include "vtkInformationWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkXMLStructuredDataReaderWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkXMLStructuredDataReaderWrap::ptpl;

VtkXMLStructuredDataReaderWrap::VtkXMLStructuredDataReaderWrap()
{ }

VtkXMLStructuredDataReaderWrap::VtkXMLStructuredDataReaderWrap(vtkSmartPointer<vtkXMLStructuredDataReader> _native)
{ native = _native; }

VtkXMLStructuredDataReaderWrap::~VtkXMLStructuredDataReaderWrap()
{ }

void VtkXMLStructuredDataReaderWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkXMLDataReaderWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkXMLDataReaderWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkXMLStructuredDataReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkXMLStructuredDataReader").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("XMLStructuredDataReader").ToLocalChecked(),tpl->GetFunction());
}

void VtkXMLStructuredDataReaderWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "CopyOutputInformation", CopyOutputInformation);
	Nan::SetPrototypeMethod(tpl, "copyOutputInformation", CopyOutputInformation);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetWholeSlices", GetWholeSlices);
	Nan::SetPrototypeMethod(tpl, "getWholeSlices", GetWholeSlices);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetWholeSlices", SetWholeSlices);
	Nan::SetPrototypeMethod(tpl, "setWholeSlices", SetWholeSlices);

	Nan::SetPrototypeMethod(tpl, "WholeSlicesOff", WholeSlicesOff);
	Nan::SetPrototypeMethod(tpl, "wholeSlicesOff", WholeSlicesOff);

	Nan::SetPrototypeMethod(tpl, "WholeSlicesOn", WholeSlicesOn);
	Nan::SetPrototypeMethod(tpl, "wholeSlicesOn", WholeSlicesOn);

}

void VtkXMLStructuredDataReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkXMLStructuredDataReaderWrap::CopyOutputInformation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLStructuredDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLStructuredDataReaderWrap>(info.Holder());
	vtkXMLStructuredDataReader *native = (vtkXMLStructuredDataReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->CopyOutputInformation(
				(vtkInformation *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLStructuredDataReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLStructuredDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLStructuredDataReaderWrap>(info.Holder());
	vtkXMLStructuredDataReader *native = (vtkXMLStructuredDataReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXMLStructuredDataReaderWrap::GetWholeSlices(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLStructuredDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLStructuredDataReaderWrap>(info.Holder());
	vtkXMLStructuredDataReader *native = (vtkXMLStructuredDataReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWholeSlices();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkXMLStructuredDataReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLStructuredDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLStructuredDataReaderWrap>(info.Holder());
	vtkXMLStructuredDataReader *native = (vtkXMLStructuredDataReader *)wrapper->native.GetPointer();
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

void VtkXMLStructuredDataReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLStructuredDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLStructuredDataReaderWrap>(info.Holder());
	vtkXMLStructuredDataReader *native = (vtkXMLStructuredDataReader *)wrapper->native.GetPointer();
	vtkXMLStructuredDataReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkXMLStructuredDataReaderWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkXMLStructuredDataReaderWrap *w = new VtkXMLStructuredDataReaderWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLStructuredDataReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLStructuredDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLStructuredDataReaderWrap>(info.Holder());
	vtkXMLStructuredDataReader *native = (vtkXMLStructuredDataReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkXMLStructuredDataReader * r;
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
			Nan::New<v8::Function>(VtkXMLStructuredDataReaderWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkXMLStructuredDataReaderWrap *w = new VtkXMLStructuredDataReaderWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLStructuredDataReaderWrap::SetWholeSlices(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLStructuredDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLStructuredDataReaderWrap>(info.Holder());
	vtkXMLStructuredDataReader *native = (vtkXMLStructuredDataReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWholeSlices(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLStructuredDataReaderWrap::WholeSlicesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLStructuredDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLStructuredDataReaderWrap>(info.Holder());
	vtkXMLStructuredDataReader *native = (vtkXMLStructuredDataReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WholeSlicesOff();
}

void VtkXMLStructuredDataReaderWrap::WholeSlicesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLStructuredDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLStructuredDataReaderWrap>(info.Holder());
	vtkXMLStructuredDataReader *native = (vtkXMLStructuredDataReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WholeSlicesOn();
}

