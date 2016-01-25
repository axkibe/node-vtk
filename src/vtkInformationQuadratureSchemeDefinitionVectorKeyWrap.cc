/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkInformationKeyWrap.h"
#include "vtkInformationQuadratureSchemeDefinitionVectorKeyWrap.h"
#include "vtkObjectWrap.h"
#include "vtkInformationWrap.h"
#include "vtkQuadratureSchemeDefinitionWrap.h"
#include "vtkXMLDataElementWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkInformationQuadratureSchemeDefinitionVectorKeyWrap::constructor;

VtkInformationQuadratureSchemeDefinitionVectorKeyWrap::VtkInformationQuadratureSchemeDefinitionVectorKeyWrap()
{ }

VtkInformationQuadratureSchemeDefinitionVectorKeyWrap::VtkInformationQuadratureSchemeDefinitionVectorKeyWrap(vtkSmartPointer<vtkInformationQuadratureSchemeDefinitionVectorKey> _native)
{ native = _native; }

VtkInformationQuadratureSchemeDefinitionVectorKeyWrap::~VtkInformationQuadratureSchemeDefinitionVectorKeyWrap()
{ }

void VtkInformationQuadratureSchemeDefinitionVectorKeyWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkInformationQuadratureSchemeDefinitionVectorKeyWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkInformationKeyWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkInformationQuadratureSchemeDefinitionVectorKey").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("InformationQuadratureSchemeDefinitionVectorKey").ToLocalChecked(),tpl->GetFunction());
}

void VtkInformationQuadratureSchemeDefinitionVectorKeyWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "Append", Append);
	Nan::SetPrototypeMethod(tpl, "append", Append);

	Nan::SetPrototypeMethod(tpl, "Clear", Clear);
	Nan::SetPrototypeMethod(tpl, "clear", Clear);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "Get", Get);
	Nan::SetPrototypeMethod(tpl, "get", Get);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "Length", Length);
	Nan::SetPrototypeMethod(tpl, "length", Length);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Resize", Resize);
	Nan::SetPrototypeMethod(tpl, "resize", Resize);

	Nan::SetPrototypeMethod(tpl, "RestoreState", RestoreState);
	Nan::SetPrototypeMethod(tpl, "restoreState", RestoreState);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SaveState", SaveState);
	Nan::SetPrototypeMethod(tpl, "saveState", SaveState);

	Nan::SetPrototypeMethod(tpl, "Set", Set);
	Nan::SetPrototypeMethod(tpl, "set", Set);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	Nan::SetPrototypeMethod(tpl, "Size", Size);
	Nan::SetPrototypeMethod(tpl, "size", Size);

}

void VtkInformationQuadratureSchemeDefinitionVectorKeyWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkInformationQuadratureSchemeDefinitionVectorKeyWrap::Append(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationQuadratureSchemeDefinitionVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationQuadratureSchemeDefinitionVectorKeyWrap>(info.Holder());
	vtkInformationQuadratureSchemeDefinitionVectorKey *native = (vtkInformationQuadratureSchemeDefinitionVectorKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkQuadratureSchemeDefinitionWrap *a1 = ObjectWrap::Unwrap<VtkQuadratureSchemeDefinitionWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Append(
				(vtkInformation *) a0->native.GetPointer(),
				(vtkQuadratureSchemeDefinition *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationQuadratureSchemeDefinitionVectorKeyWrap::Clear(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationQuadratureSchemeDefinitionVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationQuadratureSchemeDefinitionVectorKeyWrap>(info.Holder());
	vtkInformationQuadratureSchemeDefinitionVectorKey *native = (vtkInformationQuadratureSchemeDefinitionVectorKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Clear(
			(vtkInformation *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationQuadratureSchemeDefinitionVectorKeyWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationQuadratureSchemeDefinitionVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationQuadratureSchemeDefinitionVectorKeyWrap>(info.Holder());
	vtkInformationQuadratureSchemeDefinitionVectorKey *native = (vtkInformationQuadratureSchemeDefinitionVectorKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkInformationWrap *a1 = ObjectWrap::Unwrap<VtkInformationWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->DeepCopy(
				(vtkInformation *) a0->native.GetPointer(),
				(vtkInformation *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationQuadratureSchemeDefinitionVectorKeyWrap::Get(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationQuadratureSchemeDefinitionVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationQuadratureSchemeDefinitionVectorKeyWrap>(info.Holder());
	vtkInformationQuadratureSchemeDefinitionVectorKey *native = (vtkInformationQuadratureSchemeDefinitionVectorKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			vtkQuadratureSchemeDefinition * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->Get(
				(vtkInformation *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::Function>(VtkQuadratureSchemeDefinitionWrap::constructor);
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkQuadratureSchemeDefinitionWrap *w = new VtkQuadratureSchemeDefinitionWrap();
			w->native.TakeReference(r);
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationQuadratureSchemeDefinitionVectorKeyWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationQuadratureSchemeDefinitionVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationQuadratureSchemeDefinitionVectorKeyWrap>(info.Holder());
	vtkInformationQuadratureSchemeDefinitionVectorKey *native = (vtkInformationQuadratureSchemeDefinitionVectorKey *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkInformationQuadratureSchemeDefinitionVectorKeyWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationQuadratureSchemeDefinitionVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationQuadratureSchemeDefinitionVectorKeyWrap>(info.Holder());
	vtkInformationQuadratureSchemeDefinitionVectorKey *native = (vtkInformationQuadratureSchemeDefinitionVectorKey *)wrapper->native.GetPointer();
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

void VtkInformationQuadratureSchemeDefinitionVectorKeyWrap::Length(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationQuadratureSchemeDefinitionVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationQuadratureSchemeDefinitionVectorKeyWrap>(info.Holder());
	vtkInformationQuadratureSchemeDefinitionVectorKey *native = (vtkInformationQuadratureSchemeDefinitionVectorKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->Length(
			(vtkInformation *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationQuadratureSchemeDefinitionVectorKeyWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationQuadratureSchemeDefinitionVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationQuadratureSchemeDefinitionVectorKeyWrap>(info.Holder());
	vtkInformationQuadratureSchemeDefinitionVectorKey *native = (vtkInformationQuadratureSchemeDefinitionVectorKey *)wrapper->native.GetPointer();
	vtkInformationQuadratureSchemeDefinitionVectorKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkInformationQuadratureSchemeDefinitionVectorKeyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationQuadratureSchemeDefinitionVectorKeyWrap *w = new VtkInformationQuadratureSchemeDefinitionVectorKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInformationQuadratureSchemeDefinitionVectorKeyWrap::Resize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationQuadratureSchemeDefinitionVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationQuadratureSchemeDefinitionVectorKeyWrap>(info.Holder());
	vtkInformationQuadratureSchemeDefinitionVectorKey *native = (vtkInformationQuadratureSchemeDefinitionVectorKey *)wrapper->native.GetPointer();
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
			native->Resize(
				(vtkInformation *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationQuadratureSchemeDefinitionVectorKeyWrap::RestoreState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationQuadratureSchemeDefinitionVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationQuadratureSchemeDefinitionVectorKeyWrap>(info.Holder());
	vtkInformationQuadratureSchemeDefinitionVectorKey *native = (vtkInformationQuadratureSchemeDefinitionVectorKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkXMLDataElementWrap *a1 = ObjectWrap::Unwrap<VtkXMLDataElementWrap>(info[1]->ToObject());
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->RestoreState(
				(vtkInformation *) a0->native.GetPointer(),
				(vtkXMLDataElement *) a1->native.GetPointer()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationQuadratureSchemeDefinitionVectorKeyWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationQuadratureSchemeDefinitionVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationQuadratureSchemeDefinitionVectorKeyWrap>(info.Holder());
	vtkInformationQuadratureSchemeDefinitionVectorKey *native = (vtkInformationQuadratureSchemeDefinitionVectorKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkInformationQuadratureSchemeDefinitionVectorKey * r;
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
			Nan::New<v8::Function>(VtkInformationQuadratureSchemeDefinitionVectorKeyWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInformationQuadratureSchemeDefinitionVectorKeyWrap *w = new VtkInformationQuadratureSchemeDefinitionVectorKeyWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationQuadratureSchemeDefinitionVectorKeyWrap::SaveState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationQuadratureSchemeDefinitionVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationQuadratureSchemeDefinitionVectorKeyWrap>(info.Holder());
	vtkInformationQuadratureSchemeDefinitionVectorKey *native = (vtkInformationQuadratureSchemeDefinitionVectorKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkXMLDataElementWrap *a1 = ObjectWrap::Unwrap<VtkXMLDataElementWrap>(info[1]->ToObject());
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->SaveState(
				(vtkInformation *) a0->native.GetPointer(),
				(vtkXMLDataElement *) a1->native.GetPointer()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationQuadratureSchemeDefinitionVectorKeyWrap::Set(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationQuadratureSchemeDefinitionVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationQuadratureSchemeDefinitionVectorKeyWrap>(info.Holder());
	vtkInformationQuadratureSchemeDefinitionVectorKey *native = (vtkInformationQuadratureSchemeDefinitionVectorKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkQuadratureSchemeDefinitionWrap *a1 = ObjectWrap::Unwrap<VtkQuadratureSchemeDefinitionWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->Set(
					(vtkInformation *) a0->native.GetPointer(),
					(vtkQuadratureSchemeDefinition *) a1->native.GetPointer(),
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationQuadratureSchemeDefinitionVectorKeyWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationQuadratureSchemeDefinitionVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationQuadratureSchemeDefinitionVectorKeyWrap>(info.Holder());
	vtkInformationQuadratureSchemeDefinitionVectorKey *native = (vtkInformationQuadratureSchemeDefinitionVectorKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkInformationWrap *a1 = ObjectWrap::Unwrap<VtkInformationWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->ShallowCopy(
				(vtkInformation *) a0->native.GetPointer(),
				(vtkInformation *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationQuadratureSchemeDefinitionVectorKeyWrap::Size(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationQuadratureSchemeDefinitionVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationQuadratureSchemeDefinitionVectorKeyWrap>(info.Holder());
	vtkInformationQuadratureSchemeDefinitionVectorKey *native = (vtkInformationQuadratureSchemeDefinitionVectorKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->Size(
			(vtkInformation *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

