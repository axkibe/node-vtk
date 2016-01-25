/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkStructuredGridGeometryFilterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkStructuredGridGeometryFilterWrap::constructor;

VtkStructuredGridGeometryFilterWrap::VtkStructuredGridGeometryFilterWrap()
{ }

VtkStructuredGridGeometryFilterWrap::VtkStructuredGridGeometryFilterWrap(vtkSmartPointer<vtkStructuredGridGeometryFilter> _native)
{ native = _native; }

VtkStructuredGridGeometryFilterWrap::~VtkStructuredGridGeometryFilterWrap()
{ }

void VtkStructuredGridGeometryFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkStructuredGridGeometryFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAlgorithmWrap::InitTpl(tpl);
	VtkPolyDataAlgorithmWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkStructuredGridGeometryFilter").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("StructuredGridGeometryFilter").ToLocalChecked(),tpl->GetFunction());
}

void VtkStructuredGridGeometryFilterWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetExtent", SetExtent);
	Nan::SetPrototypeMethod(tpl, "setExtent", SetExtent);

}

void VtkStructuredGridGeometryFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkStructuredGridGeometryFilter> native = vtkSmartPointer<vtkStructuredGridGeometryFilter>::New();
		VtkStructuredGridGeometryFilterWrap* obj = new VtkStructuredGridGeometryFilterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkStructuredGridGeometryFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridGeometryFilterWrap>(info.Holder());
	vtkStructuredGridGeometryFilter *native = (vtkStructuredGridGeometryFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkStructuredGridGeometryFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridGeometryFilterWrap>(info.Holder());
	vtkStructuredGridGeometryFilter *native = (vtkStructuredGridGeometryFilter *)wrapper->native.GetPointer();
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

void VtkStructuredGridGeometryFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridGeometryFilterWrap>(info.Holder());
	vtkStructuredGridGeometryFilter *native = (vtkStructuredGridGeometryFilter *)wrapper->native.GetPointer();
	vtkStructuredGridGeometryFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkStructuredGridGeometryFilterWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStructuredGridGeometryFilterWrap *w = new VtkStructuredGridGeometryFilterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkStructuredGridGeometryFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridGeometryFilterWrap>(info.Holder());
	vtkStructuredGridGeometryFilter *native = (vtkStructuredGridGeometryFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkStructuredGridGeometryFilter * r;
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
			Nan::New<v8::Function>(VtkStructuredGridGeometryFilterWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkStructuredGridGeometryFilterWrap *w = new VtkStructuredGridGeometryFilterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredGridGeometryFilterWrap::SetExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridGeometryFilterWrap>(info.Holder());
	vtkStructuredGridGeometryFilter *native = (vtkStructuredGridGeometryFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() > 4 && info[4]->IsInt32())
					{
						if(info.Length() > 5 && info[5]->IsInt32())
						{
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->SetExtent(
								info[0]->Int32Value(),
								info[1]->Int32Value(),
								info[2]->Int32Value(),
								info[3]->Int32Value(),
								info[4]->Int32Value(),
								info[5]->Int32Value()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

