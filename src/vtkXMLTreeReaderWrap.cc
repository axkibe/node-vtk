/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkTreeAlgorithmWrap.h"
#include "vtkXMLTreeReaderWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkXMLTreeReaderWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkXMLTreeReaderWrap::ptpl;

VtkXMLTreeReaderWrap::VtkXMLTreeReaderWrap()
{ }

VtkXMLTreeReaderWrap::VtkXMLTreeReaderWrap(vtkSmartPointer<vtkXMLTreeReader> _native)
{ native = _native; }

VtkXMLTreeReaderWrap::~VtkXMLTreeReaderWrap()
{ }

void VtkXMLTreeReaderWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkTreeAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkTreeAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkXMLTreeReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkXMLTreeReader").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("XMLTreeReader").ToLocalChecked(),tpl->GetFunction());
}

void VtkXMLTreeReaderWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GenerateEdgePedigreeIdsOff", GenerateEdgePedigreeIdsOff);
	Nan::SetPrototypeMethod(tpl, "generateEdgePedigreeIdsOff", GenerateEdgePedigreeIdsOff);

	Nan::SetPrototypeMethod(tpl, "GenerateEdgePedigreeIdsOn", GenerateEdgePedigreeIdsOn);
	Nan::SetPrototypeMethod(tpl, "generateEdgePedigreeIdsOn", GenerateEdgePedigreeIdsOn);

	Nan::SetPrototypeMethod(tpl, "GenerateVertexPedigreeIdsOff", GenerateVertexPedigreeIdsOff);
	Nan::SetPrototypeMethod(tpl, "generateVertexPedigreeIdsOff", GenerateVertexPedigreeIdsOff);

	Nan::SetPrototypeMethod(tpl, "GenerateVertexPedigreeIdsOn", GenerateVertexPedigreeIdsOn);
	Nan::SetPrototypeMethod(tpl, "generateVertexPedigreeIdsOn", GenerateVertexPedigreeIdsOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetEdgePedigreeIdArrayName", GetEdgePedigreeIdArrayName);
	Nan::SetPrototypeMethod(tpl, "getEdgePedigreeIdArrayName", GetEdgePedigreeIdArrayName);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetVertexPedigreeIdArrayName", GetVertexPedigreeIdArrayName);
	Nan::SetPrototypeMethod(tpl, "getVertexPedigreeIdArrayName", GetVertexPedigreeIdArrayName);

	Nan::SetPrototypeMethod(tpl, "GetXMLString", GetXMLString);
	Nan::SetPrototypeMethod(tpl, "getXMLString", GetXMLString);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "MaskArraysOff", MaskArraysOff);
	Nan::SetPrototypeMethod(tpl, "maskArraysOff", MaskArraysOff);

	Nan::SetPrototypeMethod(tpl, "MaskArraysOn", MaskArraysOn);
	Nan::SetPrototypeMethod(tpl, "maskArraysOn", MaskArraysOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReadCharDataOff", ReadCharDataOff);
	Nan::SetPrototypeMethod(tpl, "readCharDataOff", ReadCharDataOff);

	Nan::SetPrototypeMethod(tpl, "ReadCharDataOn", ReadCharDataOn);
	Nan::SetPrototypeMethod(tpl, "readCharDataOn", ReadCharDataOn);

	Nan::SetPrototypeMethod(tpl, "ReadTagNameOff", ReadTagNameOff);
	Nan::SetPrototypeMethod(tpl, "readTagNameOff", ReadTagNameOff);

	Nan::SetPrototypeMethod(tpl, "ReadTagNameOn", ReadTagNameOn);
	Nan::SetPrototypeMethod(tpl, "readTagNameOn", ReadTagNameOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetEdgePedigreeIdArrayName", SetEdgePedigreeIdArrayName);
	Nan::SetPrototypeMethod(tpl, "setEdgePedigreeIdArrayName", SetEdgePedigreeIdArrayName);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	Nan::SetPrototypeMethod(tpl, "SetVertexPedigreeIdArrayName", SetVertexPedigreeIdArrayName);
	Nan::SetPrototypeMethod(tpl, "setVertexPedigreeIdArrayName", SetVertexPedigreeIdArrayName);

	Nan::SetPrototypeMethod(tpl, "SetXMLString", SetXMLString);
	Nan::SetPrototypeMethod(tpl, "setXMLString", SetXMLString);

}

void VtkXMLTreeReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkXMLTreeReader> native = vtkSmartPointer<vtkXMLTreeReader>::New();
		VtkXMLTreeReaderWrap* obj = new VtkXMLTreeReaderWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkXMLTreeReaderWrap::GenerateEdgePedigreeIdsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLTreeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLTreeReaderWrap>(info.Holder());
	vtkXMLTreeReader *native = (vtkXMLTreeReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateEdgePedigreeIdsOff();
}

void VtkXMLTreeReaderWrap::GenerateEdgePedigreeIdsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLTreeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLTreeReaderWrap>(info.Holder());
	vtkXMLTreeReader *native = (vtkXMLTreeReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateEdgePedigreeIdsOn();
}

void VtkXMLTreeReaderWrap::GenerateVertexPedigreeIdsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLTreeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLTreeReaderWrap>(info.Holder());
	vtkXMLTreeReader *native = (vtkXMLTreeReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateVertexPedigreeIdsOff();
}

void VtkXMLTreeReaderWrap::GenerateVertexPedigreeIdsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLTreeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLTreeReaderWrap>(info.Holder());
	vtkXMLTreeReader *native = (vtkXMLTreeReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateVertexPedigreeIdsOn();
}

void VtkXMLTreeReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLTreeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLTreeReaderWrap>(info.Holder());
	vtkXMLTreeReader *native = (vtkXMLTreeReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXMLTreeReaderWrap::GetEdgePedigreeIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLTreeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLTreeReaderWrap>(info.Holder());
	vtkXMLTreeReader *native = (vtkXMLTreeReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEdgePedigreeIdArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXMLTreeReaderWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLTreeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLTreeReaderWrap>(info.Holder());
	vtkXMLTreeReader *native = (vtkXMLTreeReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXMLTreeReaderWrap::GetVertexPedigreeIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLTreeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLTreeReaderWrap>(info.Holder());
	vtkXMLTreeReader *native = (vtkXMLTreeReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVertexPedigreeIdArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXMLTreeReaderWrap::GetXMLString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLTreeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLTreeReaderWrap>(info.Holder());
	vtkXMLTreeReader *native = (vtkXMLTreeReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetXMLString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXMLTreeReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLTreeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLTreeReaderWrap>(info.Holder());
	vtkXMLTreeReader *native = (vtkXMLTreeReader *)wrapper->native.GetPointer();
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

void VtkXMLTreeReaderWrap::MaskArraysOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLTreeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLTreeReaderWrap>(info.Holder());
	vtkXMLTreeReader *native = (vtkXMLTreeReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MaskArraysOff();
}

void VtkXMLTreeReaderWrap::MaskArraysOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLTreeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLTreeReaderWrap>(info.Holder());
	vtkXMLTreeReader *native = (vtkXMLTreeReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MaskArraysOn();
}

void VtkXMLTreeReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLTreeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLTreeReaderWrap>(info.Holder());
	vtkXMLTreeReader *native = (vtkXMLTreeReader *)wrapper->native.GetPointer();
	vtkXMLTreeReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkXMLTreeReaderWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkXMLTreeReaderWrap *w = new VtkXMLTreeReaderWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLTreeReaderWrap::ReadCharDataOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLTreeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLTreeReaderWrap>(info.Holder());
	vtkXMLTreeReader *native = (vtkXMLTreeReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReadCharDataOff();
}

void VtkXMLTreeReaderWrap::ReadCharDataOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLTreeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLTreeReaderWrap>(info.Holder());
	vtkXMLTreeReader *native = (vtkXMLTreeReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReadCharDataOn();
}

void VtkXMLTreeReaderWrap::ReadTagNameOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLTreeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLTreeReaderWrap>(info.Holder());
	vtkXMLTreeReader *native = (vtkXMLTreeReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReadTagNameOff();
}

void VtkXMLTreeReaderWrap::ReadTagNameOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLTreeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLTreeReaderWrap>(info.Holder());
	vtkXMLTreeReader *native = (vtkXMLTreeReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReadTagNameOn();
}

void VtkXMLTreeReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLTreeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLTreeReaderWrap>(info.Holder());
	vtkXMLTreeReader *native = (vtkXMLTreeReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkXMLTreeReader * r;
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
			Nan::New<v8::Function>(VtkXMLTreeReaderWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkXMLTreeReaderWrap *w = new VtkXMLTreeReaderWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLTreeReaderWrap::SetEdgePedigreeIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLTreeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLTreeReaderWrap>(info.Holder());
	vtkXMLTreeReader *native = (vtkXMLTreeReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEdgePedigreeIdArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLTreeReaderWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLTreeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLTreeReaderWrap>(info.Holder());
	vtkXMLTreeReader *native = (vtkXMLTreeReader *)wrapper->native.GetPointer();
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

void VtkXMLTreeReaderWrap::SetVertexPedigreeIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLTreeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLTreeReaderWrap>(info.Holder());
	vtkXMLTreeReader *native = (vtkXMLTreeReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVertexPedigreeIdArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLTreeReaderWrap::SetXMLString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLTreeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLTreeReaderWrap>(info.Holder());
	vtkXMLTreeReader *native = (vtkXMLTreeReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetXMLString(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

