/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImporterWrap.h"
#include "vtkVRMLImporterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkVRMLImporterWrap::ptpl;

VtkVRMLImporterWrap::VtkVRMLImporterWrap()
{ }

VtkVRMLImporterWrap::VtkVRMLImporterWrap(vtkSmartPointer<vtkVRMLImporter> _native)
{ native = _native; }

VtkVRMLImporterWrap::~VtkVRMLImporterWrap()
{ }

void VtkVRMLImporterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkVRMLImporter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("VRMLImporter").ToLocalChecked(), ConstructorGetter);
}

void VtkVRMLImporterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkVRMLImporterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImporterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImporterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkVRMLImporterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetVRMLDEFObject", GetVRMLDEFObject);
	Nan::SetPrototypeMethod(tpl, "getVRMLDEFObject", GetVRMLDEFObject);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	Nan::SetPrototypeMethod(tpl, "enterField", enterField);
	Nan::SetPrototypeMethod(tpl, "enterField", enterField);

	Nan::SetPrototypeMethod(tpl, "enterNode", enterNode);
	Nan::SetPrototypeMethod(tpl, "enterNode", enterNode);

	Nan::SetPrototypeMethod(tpl, "exitField", exitField);
	Nan::SetPrototypeMethod(tpl, "exitField", exitField);

	Nan::SetPrototypeMethod(tpl, "exitNode", exitNode);
	Nan::SetPrototypeMethod(tpl, "exitNode", exitNode);

	Nan::SetPrototypeMethod(tpl, "useNode", useNode);
	Nan::SetPrototypeMethod(tpl, "useNode", useNode);

	ptpl.Reset( tpl );
}

void VtkVRMLImporterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkVRMLImporter> native = vtkSmartPointer<vtkVRMLImporter>::New();
		VtkVRMLImporterWrap* obj = new VtkVRMLImporterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkVRMLImporterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVRMLImporterWrap *wrapper = ObjectWrap::Unwrap<VtkVRMLImporterWrap>(info.Holder());
	vtkVRMLImporter *native = (vtkVRMLImporter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkVRMLImporterWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVRMLImporterWrap *wrapper = ObjectWrap::Unwrap<VtkVRMLImporterWrap>(info.Holder());
	vtkVRMLImporter *native = (vtkVRMLImporter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkVRMLImporterWrap::GetVRMLDEFObject(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVRMLImporterWrap *wrapper = ObjectWrap::Unwrap<VtkVRMLImporterWrap>(info.Holder());
	vtkVRMLImporter *native = (vtkVRMLImporter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		vtkObject * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetVRMLDEFObject(
			*a0
		);
			VtkObjectWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkObjectWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkObjectWrap *w = new VtkObjectWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVRMLImporterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVRMLImporterWrap *wrapper = ObjectWrap::Unwrap<VtkVRMLImporterWrap>(info.Holder());
	vtkVRMLImporter *native = (vtkVRMLImporter *)wrapper->native.GetPointer();
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

void VtkVRMLImporterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVRMLImporterWrap *wrapper = ObjectWrap::Unwrap<VtkVRMLImporterWrap>(info.Holder());
	vtkVRMLImporter *native = (vtkVRMLImporter *)wrapper->native.GetPointer();
	vtkVRMLImporter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkVRMLImporterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkVRMLImporterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkVRMLImporterWrap *w = new VtkVRMLImporterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkVRMLImporterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVRMLImporterWrap *wrapper = ObjectWrap::Unwrap<VtkVRMLImporterWrap>(info.Holder());
	vtkVRMLImporter *native = (vtkVRMLImporter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkVRMLImporter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkVRMLImporterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkVRMLImporterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkVRMLImporterWrap *w = new VtkVRMLImporterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVRMLImporterWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVRMLImporterWrap *wrapper = ObjectWrap::Unwrap<VtkVRMLImporterWrap>(info.Holder());
	vtkVRMLImporter *native = (vtkVRMLImporter *)wrapper->native.GetPointer();
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

void VtkVRMLImporterWrap::enterField(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVRMLImporterWrap *wrapper = ObjectWrap::Unwrap<VtkVRMLImporterWrap>(info.Holder());
	vtkVRMLImporter *native = (vtkVRMLImporter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->enterField(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVRMLImporterWrap::enterNode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVRMLImporterWrap *wrapper = ObjectWrap::Unwrap<VtkVRMLImporterWrap>(info.Holder());
	vtkVRMLImporter *native = (vtkVRMLImporter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->enterNode(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVRMLImporterWrap::exitField(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVRMLImporterWrap *wrapper = ObjectWrap::Unwrap<VtkVRMLImporterWrap>(info.Holder());
	vtkVRMLImporter *native = (vtkVRMLImporter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->exitField();
}

void VtkVRMLImporterWrap::exitNode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVRMLImporterWrap *wrapper = ObjectWrap::Unwrap<VtkVRMLImporterWrap>(info.Holder());
	vtkVRMLImporter *native = (vtkVRMLImporter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->exitNode();
}

void VtkVRMLImporterWrap::useNode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVRMLImporterWrap *wrapper = ObjectWrap::Unwrap<VtkVRMLImporterWrap>(info.Holder());
	vtkVRMLImporter *native = (vtkVRMLImporter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->useNode(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

