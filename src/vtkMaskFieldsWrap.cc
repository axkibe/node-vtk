/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataSetAlgorithmWrap.h"
#include "vtkMaskFieldsWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkMaskFieldsWrap::ptpl;

VtkMaskFieldsWrap::VtkMaskFieldsWrap()
{ }

VtkMaskFieldsWrap::VtkMaskFieldsWrap(vtkSmartPointer<vtkMaskFields> _native)
{ native = _native; }

VtkMaskFieldsWrap::~VtkMaskFieldsWrap()
{ }

void VtkMaskFieldsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkMaskFields").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("MaskFields").ToLocalChecked(), ConstructorGetter);
}

void VtkMaskFieldsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkMaskFieldsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkMaskFieldsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CopyAllOff", CopyAllOff);
	Nan::SetPrototypeMethod(tpl, "copyAllOff", CopyAllOff);

	Nan::SetPrototypeMethod(tpl, "CopyAllOn", CopyAllOn);
	Nan::SetPrototypeMethod(tpl, "copyAllOn", CopyAllOn);

	Nan::SetPrototypeMethod(tpl, "CopyAttributeOff", CopyAttributeOff);
	Nan::SetPrototypeMethod(tpl, "copyAttributeOff", CopyAttributeOff);

	Nan::SetPrototypeMethod(tpl, "CopyAttributeOn", CopyAttributeOn);
	Nan::SetPrototypeMethod(tpl, "copyAttributeOn", CopyAttributeOn);

	Nan::SetPrototypeMethod(tpl, "CopyAttributesOff", CopyAttributesOff);
	Nan::SetPrototypeMethod(tpl, "copyAttributesOff", CopyAttributesOff);

	Nan::SetPrototypeMethod(tpl, "CopyAttributesOn", CopyAttributesOn);
	Nan::SetPrototypeMethod(tpl, "copyAttributesOn", CopyAttributesOn);

	Nan::SetPrototypeMethod(tpl, "CopyFieldOff", CopyFieldOff);
	Nan::SetPrototypeMethod(tpl, "copyFieldOff", CopyFieldOff);

	Nan::SetPrototypeMethod(tpl, "CopyFieldOn", CopyFieldOn);
	Nan::SetPrototypeMethod(tpl, "copyFieldOn", CopyFieldOn);

	Nan::SetPrototypeMethod(tpl, "CopyFieldsOff", CopyFieldsOff);
	Nan::SetPrototypeMethod(tpl, "copyFieldsOff", CopyFieldsOff);

	Nan::SetPrototypeMethod(tpl, "CopyFieldsOn", CopyFieldsOn);
	Nan::SetPrototypeMethod(tpl, "copyFieldsOn", CopyFieldsOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkMaskFieldsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkMaskFields> native = vtkSmartPointer<vtkMaskFields>::New();
		VtkMaskFieldsWrap* obj = new VtkMaskFieldsWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkMaskFieldsWrap::CopyAllOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskFieldsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskFieldsWrap>(info.Holder());
	vtkMaskFields *native = (vtkMaskFields *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CopyAllOff();
}

void VtkMaskFieldsWrap::CopyAllOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskFieldsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskFieldsWrap>(info.Holder());
	vtkMaskFields *native = (vtkMaskFields *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CopyAllOn();
}

void VtkMaskFieldsWrap::CopyAttributeOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskFieldsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskFieldsWrap>(info.Holder());
	vtkMaskFields *native = (vtkMaskFields *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			Nan::Utf8String a1(info[1]);
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->CopyAttributeOff(
				*a0,
				*a1
			);
			return;
		}
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->CopyAttributeOff(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMaskFieldsWrap::CopyAttributeOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskFieldsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskFieldsWrap>(info.Holder());
	vtkMaskFields *native = (vtkMaskFields *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			Nan::Utf8String a1(info[1]);
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->CopyAttributeOn(
				*a0,
				*a1
			);
			return;
		}
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->CopyAttributeOn(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMaskFieldsWrap::CopyAttributesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskFieldsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskFieldsWrap>(info.Holder());
	vtkMaskFields *native = (vtkMaskFields *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CopyAttributesOff();
}

void VtkMaskFieldsWrap::CopyAttributesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskFieldsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskFieldsWrap>(info.Holder());
	vtkMaskFields *native = (vtkMaskFields *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CopyAttributesOn();
}

void VtkMaskFieldsWrap::CopyFieldOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskFieldsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskFieldsWrap>(info.Holder());
	vtkMaskFields *native = (vtkMaskFields *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			Nan::Utf8String a1(info[1]);
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->CopyFieldOff(
				*a0,
				*a1
			);
			return;
		}
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			Nan::Utf8String a1(info[1]);
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->CopyFieldOff(
				info[0]->Int32Value(),
				*a1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMaskFieldsWrap::CopyFieldOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskFieldsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskFieldsWrap>(info.Holder());
	vtkMaskFields *native = (vtkMaskFields *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			Nan::Utf8String a1(info[1]);
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->CopyFieldOn(
				*a0,
				*a1
			);
			return;
		}
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			Nan::Utf8String a1(info[1]);
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->CopyFieldOn(
				info[0]->Int32Value(),
				*a1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMaskFieldsWrap::CopyFieldsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskFieldsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskFieldsWrap>(info.Holder());
	vtkMaskFields *native = (vtkMaskFields *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CopyFieldsOff();
}

void VtkMaskFieldsWrap::CopyFieldsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskFieldsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskFieldsWrap>(info.Holder());
	vtkMaskFields *native = (vtkMaskFields *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CopyFieldsOn();
}

void VtkMaskFieldsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskFieldsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskFieldsWrap>(info.Holder());
	vtkMaskFields *native = (vtkMaskFields *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMaskFieldsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskFieldsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskFieldsWrap>(info.Holder());
	vtkMaskFields *native = (vtkMaskFields *)wrapper->native.GetPointer();
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

void VtkMaskFieldsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskFieldsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskFieldsWrap>(info.Holder());
	vtkMaskFields *native = (vtkMaskFields *)wrapper->native.GetPointer();
	vtkMaskFields * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkMaskFieldsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMaskFieldsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMaskFieldsWrap *w = new VtkMaskFieldsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMaskFieldsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskFieldsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskFieldsWrap>(info.Holder());
	vtkMaskFields *native = (vtkMaskFields *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkMaskFields * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkMaskFieldsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkMaskFieldsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMaskFieldsWrap *w = new VtkMaskFieldsWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

