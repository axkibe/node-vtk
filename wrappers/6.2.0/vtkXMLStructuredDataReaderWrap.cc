/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkXMLDataReaderWrap.h"
#include "vtkXMLStructuredDataReaderWrap.h"
#include "vtkObjectWrap.h"
#include "vtkInformationWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkXMLStructuredDataReaderWrap::ptpl;

VtkXMLStructuredDataReaderWrap::VtkXMLStructuredDataReaderWrap()
{ }

VtkXMLStructuredDataReaderWrap::VtkXMLStructuredDataReaderWrap(vtkSmartPointer<vtkXMLStructuredDataReader> _native)
{ native = _native; }

VtkXMLStructuredDataReaderWrap::~VtkXMLStructuredDataReaderWrap()
{ }

void VtkXMLStructuredDataReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkXMLStructuredDataReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("XMLStructuredDataReader").ToLocalChecked(), ConstructorGetter);
}

void VtkXMLStructuredDataReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkXMLStructuredDataReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkXMLDataReaderWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkXMLDataReaderWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkXMLStructuredDataReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

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

#ifdef VTK_NODE_PLUS_VTKXMLSTRUCTUREDDATAREADERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKXMLSTRUCTUREDDATAREADERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
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
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkXMLStructuredDataReaderWrap::CopyOutputInformation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLStructuredDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLStructuredDataReaderWrap>(info.Holder());
	vtkXMLStructuredDataReader *native = (vtkXMLStructuredDataReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
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
	VtkXMLStructuredDataReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkXMLStructuredDataReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkXMLStructuredDataReaderWrap *w = new VtkXMLStructuredDataReaderWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLStructuredDataReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLStructuredDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLStructuredDataReaderWrap>(info.Holder());
	vtkXMLStructuredDataReader *native = (vtkXMLStructuredDataReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
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
		VtkXMLStructuredDataReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkXMLStructuredDataReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkXMLStructuredDataReaderWrap *w = new VtkXMLStructuredDataReaderWrap();
		w->native = r;
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

