/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkInformationVectorWrap.h"
#include "vtkInformationWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkInformationVectorWrap::ptpl;

VtkInformationVectorWrap::VtkInformationVectorWrap()
{ }

VtkInformationVectorWrap::VtkInformationVectorWrap(vtkSmartPointer<vtkInformationVector> _native)
{ native = _native; }

VtkInformationVectorWrap::~VtkInformationVectorWrap()
{ }

void VtkInformationVectorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkInformationVector").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("InformationVector").ToLocalChecked(), ConstructorGetter);
}

void VtkInformationVectorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkInformationVectorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkInformationVectorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Append", Append);
	Nan::SetPrototypeMethod(tpl, "append", Append);

	Nan::SetPrototypeMethod(tpl, "Copy", Copy);
	Nan::SetPrototypeMethod(tpl, "copy", Copy);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetInformationObject", GetInformationObject);
	Nan::SetPrototypeMethod(tpl, "getInformationObject", GetInformationObject);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfInformationObjects", GetNumberOfInformationObjects);
	Nan::SetPrototypeMethod(tpl, "getNumberOfInformationObjects", GetNumberOfInformationObjects);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Remove", Remove);
	Nan::SetPrototypeMethod(tpl, "remove", Remove);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetInformationObject", SetInformationObject);
	Nan::SetPrototypeMethod(tpl, "setInformationObject", SetInformationObject);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfInformationObjects", SetNumberOfInformationObjects);
	Nan::SetPrototypeMethod(tpl, "setNumberOfInformationObjects", SetNumberOfInformationObjects);

	ptpl.Reset( tpl );
}

void VtkInformationVectorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkInformationVector> native = vtkSmartPointer<vtkInformationVector>::New();
		VtkInformationVectorWrap* obj = new VtkInformationVectorWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkInformationVectorWrap::Append(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationVectorWrap *wrapper = ObjectWrap::Unwrap<VtkInformationVectorWrap>(info.Holder());
	vtkInformationVector *native = (vtkInformationVector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Append(
			(vtkInformation *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationVectorWrap::Copy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationVectorWrap *wrapper = ObjectWrap::Unwrap<VtkInformationVectorWrap>(info.Holder());
	vtkInformationVector *native = (vtkInformationVector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationVectorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationVectorWrap *a0 = ObjectWrap::Unwrap<VtkInformationVectorWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Copy(
				(vtkInformationVector *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationVectorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationVectorWrap *wrapper = ObjectWrap::Unwrap<VtkInformationVectorWrap>(info.Holder());
	vtkInformationVector *native = (vtkInformationVector *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkInformationVectorWrap::GetInformationObject(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationVectorWrap *wrapper = ObjectWrap::Unwrap<VtkInformationVectorWrap>(info.Holder());
	vtkInformationVector *native = (vtkInformationVector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkInformation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetInformationObject(
			info[0]->Int32Value()
		);
			VtkInformationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkInformationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInformationWrap *w = new VtkInformationWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationVectorWrap::GetNumberOfInformationObjects(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationVectorWrap *wrapper = ObjectWrap::Unwrap<VtkInformationVectorWrap>(info.Holder());
	vtkInformationVector *native = (vtkInformationVector *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfInformationObjects();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkInformationVectorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationVectorWrap *wrapper = ObjectWrap::Unwrap<VtkInformationVectorWrap>(info.Holder());
	vtkInformationVector *native = (vtkInformationVector *)wrapper->native.GetPointer();
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

void VtkInformationVectorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationVectorWrap *wrapper = ObjectWrap::Unwrap<VtkInformationVectorWrap>(info.Holder());
	vtkInformationVector *native = (vtkInformationVector *)wrapper->native.GetPointer();
	vtkInformationVector * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkInformationVectorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationVectorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationVectorWrap *w = new VtkInformationVectorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInformationVectorWrap::Remove(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationVectorWrap *wrapper = ObjectWrap::Unwrap<VtkInformationVectorWrap>(info.Holder());
	vtkInformationVector *native = (vtkInformationVector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Remove(
			(vtkInformation *) a0->native.GetPointer()
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Remove(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationVectorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationVectorWrap *wrapper = ObjectWrap::Unwrap<VtkInformationVectorWrap>(info.Holder());
	vtkInformationVector *native = (vtkInformationVector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkInformationVector * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkInformationVectorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkInformationVectorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInformationVectorWrap *w = new VtkInformationVectorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationVectorWrap::SetInformationObject(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationVectorWrap *wrapper = ObjectWrap::Unwrap<VtkInformationVectorWrap>(info.Holder());
	vtkInformationVector *native = (vtkInformationVector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[1]))
		{
			VtkInformationWrap *a1 = ObjectWrap::Unwrap<VtkInformationWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetInformationObject(
				info[0]->Int32Value(),
				(vtkInformation *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationVectorWrap::SetNumberOfInformationObjects(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationVectorWrap *wrapper = ObjectWrap::Unwrap<VtkInformationVectorWrap>(info.Holder());
	vtkInformationVector *native = (vtkInformationVector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfInformationObjects(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

