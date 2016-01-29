/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkXMLUtilitiesWrap.h"
#include "vtkXMLDataElementWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkXMLUtilitiesWrap::ptpl;

VtkXMLUtilitiesWrap::VtkXMLUtilitiesWrap()
{ }

VtkXMLUtilitiesWrap::VtkXMLUtilitiesWrap(vtkSmartPointer<vtkXMLUtilities> _native)
{ native = _native; }

VtkXMLUtilitiesWrap::~VtkXMLUtilitiesWrap()
{ }

void VtkXMLUtilitiesWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkXMLUtilities").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("XMLUtilities").ToLocalChecked(), ConstructorGetter);
}

void VtkXMLUtilitiesWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkXMLUtilitiesWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkXMLUtilitiesWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "FactorElements", FactorElements);
	Nan::SetPrototypeMethod(tpl, "factorElements", FactorElements);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReadElementFromFile", ReadElementFromFile);
	Nan::SetPrototypeMethod(tpl, "readElementFromFile", ReadElementFromFile);

	Nan::SetPrototypeMethod(tpl, "ReadElementFromString", ReadElementFromString);
	Nan::SetPrototypeMethod(tpl, "readElementFromString", ReadElementFromString);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "UnFactorElements", UnFactorElements);
	Nan::SetPrototypeMethod(tpl, "unFactorElements", UnFactorElements);

	ptpl.Reset( tpl );
}

void VtkXMLUtilitiesWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkXMLUtilities> native = vtkSmartPointer<vtkXMLUtilities>::New();
		VtkXMLUtilitiesWrap* obj = new VtkXMLUtilitiesWrap(native);
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

void VtkXMLUtilitiesWrap::FactorElements(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLUtilitiesWrap *wrapper = ObjectWrap::Unwrap<VtkXMLUtilitiesWrap>(info.Holder());
	vtkXMLUtilities *native = (vtkXMLUtilities *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkXMLDataElementWrap::ptpl))->HasInstance(info[0]))
	{
		VtkXMLDataElementWrap *a0 = ObjectWrap::Unwrap<VtkXMLDataElementWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->FactorElements(
			(vtkXMLDataElement *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLUtilitiesWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLUtilitiesWrap *wrapper = ObjectWrap::Unwrap<VtkXMLUtilitiesWrap>(info.Holder());
	vtkXMLUtilities *native = (vtkXMLUtilities *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXMLUtilitiesWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLUtilitiesWrap *wrapper = ObjectWrap::Unwrap<VtkXMLUtilitiesWrap>(info.Holder());
	vtkXMLUtilities *native = (vtkXMLUtilities *)wrapper->native.GetPointer();
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

void VtkXMLUtilitiesWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLUtilitiesWrap *wrapper = ObjectWrap::Unwrap<VtkXMLUtilitiesWrap>(info.Holder());
	vtkXMLUtilities *native = (vtkXMLUtilities *)wrapper->native.GetPointer();
	vtkXMLUtilities * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkXMLUtilitiesWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkXMLUtilitiesWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkXMLUtilitiesWrap *w = new VtkXMLUtilitiesWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLUtilitiesWrap::ReadElementFromFile(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLUtilitiesWrap *wrapper = ObjectWrap::Unwrap<VtkXMLUtilitiesWrap>(info.Holder());
	vtkXMLUtilities *native = (vtkXMLUtilities *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			vtkXMLDataElement * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->ReadElementFromFile(
				*a0,
				info[1]->Int32Value()
			);
				VtkXMLDataElementWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::FunctionTemplate>(VtkXMLDataElementWrap::ptpl)->GetFunction();
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkXMLDataElementWrap *w = new VtkXMLDataElementWrap();
			w->native = r;
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLUtilitiesWrap::ReadElementFromString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLUtilitiesWrap *wrapper = ObjectWrap::Unwrap<VtkXMLUtilitiesWrap>(info.Holder());
	vtkXMLUtilities *native = (vtkXMLUtilities *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			vtkXMLDataElement * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->ReadElementFromString(
				*a0,
				info[1]->Int32Value()
			);
				VtkXMLDataElementWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::FunctionTemplate>(VtkXMLDataElementWrap::ptpl)->GetFunction();
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkXMLDataElementWrap *w = new VtkXMLDataElementWrap();
			w->native = r;
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLUtilitiesWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLUtilitiesWrap *wrapper = ObjectWrap::Unwrap<VtkXMLUtilitiesWrap>(info.Holder());
	vtkXMLUtilities *native = (vtkXMLUtilities *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkXMLUtilities * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkXMLUtilitiesWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkXMLUtilitiesWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkXMLUtilitiesWrap *w = new VtkXMLUtilitiesWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLUtilitiesWrap::UnFactorElements(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLUtilitiesWrap *wrapper = ObjectWrap::Unwrap<VtkXMLUtilitiesWrap>(info.Holder());
	vtkXMLUtilities *native = (vtkXMLUtilities *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkXMLDataElementWrap::ptpl))->HasInstance(info[0]))
	{
		VtkXMLDataElementWrap *a0 = ObjectWrap::Unwrap<VtkXMLDataElementWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->UnFactorElements(
			(vtkXMLDataElement *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

