/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataSetAlgorithmWrap.h"
#include "vtkMergeFieldsWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkMergeFieldsWrap::constructor;

VtkMergeFieldsWrap::VtkMergeFieldsWrap()
{ }

VtkMergeFieldsWrap::VtkMergeFieldsWrap(vtkSmartPointer<vtkMergeFields> _native)
{ native = _native; }

VtkMergeFieldsWrap::~VtkMergeFieldsWrap()
{ }

void VtkMergeFieldsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkMergeFieldsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAlgorithmWrap::InitTpl(tpl);
	VtkDataSetAlgorithmWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkMergeFields").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("MergeFields").ToLocalChecked(),tpl->GetFunction());
}

void VtkMergeFieldsWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfComponents", GetNumberOfComponents);
	Nan::SetPrototypeMethod(tpl, "getNumberOfComponents", GetNumberOfComponents);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "Merge", Merge);
	Nan::SetPrototypeMethod(tpl, "merge", Merge);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfComponents", SetNumberOfComponents);
	Nan::SetPrototypeMethod(tpl, "setNumberOfComponents", SetNumberOfComponents);

	Nan::SetPrototypeMethod(tpl, "SetOutputField", SetOutputField);
	Nan::SetPrototypeMethod(tpl, "setOutputField", SetOutputField);

}

void VtkMergeFieldsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkMergeFields> native = vtkSmartPointer<vtkMergeFields>::New();
		VtkMergeFieldsWrap* obj = new VtkMergeFieldsWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkMergeFieldsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeFieldsWrap *wrapper = ObjectWrap::Unwrap<VtkMergeFieldsWrap>(info.Holder());
	vtkMergeFields *native = (vtkMergeFields *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMergeFieldsWrap::GetNumberOfComponents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeFieldsWrap *wrapper = ObjectWrap::Unwrap<VtkMergeFieldsWrap>(info.Holder());
	vtkMergeFields *native = (vtkMergeFields *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfComponents();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMergeFieldsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeFieldsWrap *wrapper = ObjectWrap::Unwrap<VtkMergeFieldsWrap>(info.Holder());
	vtkMergeFields *native = (vtkMergeFields *)wrapper->native.GetPointer();
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

void VtkMergeFieldsWrap::Merge(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeFieldsWrap *wrapper = ObjectWrap::Unwrap<VtkMergeFieldsWrap>(info.Holder());
	vtkMergeFields *native = (vtkMergeFields *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			Nan::Utf8String a1(info[1]);
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->Merge(
					info[0]->Int32Value(),
					*a1,
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMergeFieldsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeFieldsWrap *wrapper = ObjectWrap::Unwrap<VtkMergeFieldsWrap>(info.Holder());
	vtkMergeFields *native = (vtkMergeFields *)wrapper->native.GetPointer();
	vtkMergeFields * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkMergeFieldsWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMergeFieldsWrap *w = new VtkMergeFieldsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMergeFieldsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeFieldsWrap *wrapper = ObjectWrap::Unwrap<VtkMergeFieldsWrap>(info.Holder());
	vtkMergeFields *native = (vtkMergeFields *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkMergeFields * r;
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
			Nan::New<v8::Function>(VtkMergeFieldsWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMergeFieldsWrap *w = new VtkMergeFieldsWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMergeFieldsWrap::SetNumberOfComponents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeFieldsWrap *wrapper = ObjectWrap::Unwrap<VtkMergeFieldsWrap>(info.Holder());
	vtkMergeFields *native = (vtkMergeFields *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfComponents(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMergeFieldsWrap::SetOutputField(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeFieldsWrap *wrapper = ObjectWrap::Unwrap<VtkMergeFieldsWrap>(info.Holder());
	vtkMergeFields *native = (vtkMergeFields *)wrapper->native.GetPointer();
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
			native->SetOutputField(
				*a0,
				*a1
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetOutputField(
				*a0,
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

