/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkGenericVertexAttributeMappingWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkGenericVertexAttributeMappingWrap::constructor;

VtkGenericVertexAttributeMappingWrap::VtkGenericVertexAttributeMappingWrap()
{ }

VtkGenericVertexAttributeMappingWrap::VtkGenericVertexAttributeMappingWrap(vtkSmartPointer<vtkGenericVertexAttributeMapping> _native)
{ native = _native; }

VtkGenericVertexAttributeMappingWrap::~VtkGenericVertexAttributeMappingWrap()
{ }

void VtkGenericVertexAttributeMappingWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkGenericVertexAttributeMappingWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkGenericVertexAttributeMapping").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("GenericVertexAttributeMapping").ToLocalChecked(),tpl->GetFunction());
}

void VtkGenericVertexAttributeMappingWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "AddMapping", AddMapping);
	Nan::SetPrototypeMethod(tpl, "addMapping", AddMapping);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveAllMappings", RemoveAllMappings);
	Nan::SetPrototypeMethod(tpl, "removeAllMappings", RemoveAllMappings);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

}

void VtkGenericVertexAttributeMappingWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGenericVertexAttributeMapping> native = vtkSmartPointer<vtkGenericVertexAttributeMapping>::New();
		VtkGenericVertexAttributeMappingWrap* obj = new VtkGenericVertexAttributeMappingWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkGenericVertexAttributeMappingWrap::AddMapping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericVertexAttributeMappingWrap *wrapper = ObjectWrap::Unwrap<VtkGenericVertexAttributeMappingWrap>(info.Holder());
	vtkGenericVertexAttributeMapping *native = (vtkGenericVertexAttributeMapping *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			Nan::Utf8String a1(info[1]);
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->AddMapping(
						*a0,
						*a1,
						info[2]->Int32Value(),
						info[3]->Int32Value()
					);
					return;
				}
			}
		}
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			Nan::Utf8String a1(info[1]);
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->AddMapping(
						info[0]->Int32Value(),
						*a1,
						info[2]->Int32Value(),
						info[3]->Int32Value()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericVertexAttributeMappingWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericVertexAttributeMappingWrap *wrapper = ObjectWrap::Unwrap<VtkGenericVertexAttributeMappingWrap>(info.Holder());
	vtkGenericVertexAttributeMapping *native = (vtkGenericVertexAttributeMapping *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGenericVertexAttributeMappingWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericVertexAttributeMappingWrap *wrapper = ObjectWrap::Unwrap<VtkGenericVertexAttributeMappingWrap>(info.Holder());
	vtkGenericVertexAttributeMapping *native = (vtkGenericVertexAttributeMapping *)wrapper->native.GetPointer();
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

void VtkGenericVertexAttributeMappingWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericVertexAttributeMappingWrap *wrapper = ObjectWrap::Unwrap<VtkGenericVertexAttributeMappingWrap>(info.Holder());
	vtkGenericVertexAttributeMapping *native = (vtkGenericVertexAttributeMapping *)wrapper->native.GetPointer();
	vtkGenericVertexAttributeMapping * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkGenericVertexAttributeMappingWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGenericVertexAttributeMappingWrap *w = new VtkGenericVertexAttributeMappingWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGenericVertexAttributeMappingWrap::RemoveAllMappings(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericVertexAttributeMappingWrap *wrapper = ObjectWrap::Unwrap<VtkGenericVertexAttributeMappingWrap>(info.Holder());
	vtkGenericVertexAttributeMapping *native = (vtkGenericVertexAttributeMapping *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveAllMappings();
}

void VtkGenericVertexAttributeMappingWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericVertexAttributeMappingWrap *wrapper = ObjectWrap::Unwrap<VtkGenericVertexAttributeMappingWrap>(info.Holder());
	vtkGenericVertexAttributeMapping *native = (vtkGenericVertexAttributeMapping *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGenericVertexAttributeMapping * r;
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
			Nan::New<v8::Function>(VtkGenericVertexAttributeMappingWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGenericVertexAttributeMappingWrap *w = new VtkGenericVertexAttributeMappingWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

