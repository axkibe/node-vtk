/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAreaPickerWrap.h"
#include "vtkRenderedAreaPickerWrap.h"
#include "vtkObjectWrap.h"
#include "vtkRendererWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkRenderedAreaPickerWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkRenderedAreaPickerWrap::ptpl;

VtkRenderedAreaPickerWrap::VtkRenderedAreaPickerWrap()
{ }

VtkRenderedAreaPickerWrap::VtkRenderedAreaPickerWrap(vtkSmartPointer<vtkRenderedAreaPicker> _native)
{ native = _native; }

VtkRenderedAreaPickerWrap::~VtkRenderedAreaPickerWrap()
{ }

void VtkRenderedAreaPickerWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkRenderedAreaPicker").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("RenderedAreaPicker").ToLocalChecked(), ConstructorGetter);
}

void VtkRenderedAreaPickerWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkRenderedAreaPickerWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAreaPickerWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAreaPickerWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkRenderedAreaPickerWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AreaPick", AreaPick);
	Nan::SetPrototypeMethod(tpl, "areaPick", AreaPick);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkRenderedAreaPickerWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkRenderedAreaPicker> native = vtkSmartPointer<vtkRenderedAreaPicker>::New();
		VtkRenderedAreaPickerWrap* obj = new VtkRenderedAreaPickerWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkRenderedAreaPickerWrap::AreaPick(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderedAreaPickerWrap *wrapper = ObjectWrap::Unwrap<VtkRenderedAreaPickerWrap>(info.Holder());
	vtkRenderedAreaPicker *native = (vtkRenderedAreaPicker *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() > 4 && info[4]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[4]))
					{
						VtkRendererWrap *a4 = ObjectWrap::Unwrap<VtkRendererWrap>(info[4]->ToObject());
						int r;
						if(info.Length() != 5)
						{
							Nan::ThrowError("Too many parameters.");
							return;
						}
						r = native->AreaPick(
							info[0]->NumberValue(),
							info[1]->NumberValue(),
							info[2]->NumberValue(),
							info[3]->NumberValue(),
							(vtkRenderer *) a4->native.GetPointer()
						);
						info.GetReturnValue().Set(Nan::New(r));
						return;
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRenderedAreaPickerWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderedAreaPickerWrap *wrapper = ObjectWrap::Unwrap<VtkRenderedAreaPickerWrap>(info.Holder());
	vtkRenderedAreaPicker *native = (vtkRenderedAreaPicker *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRenderedAreaPickerWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderedAreaPickerWrap *wrapper = ObjectWrap::Unwrap<VtkRenderedAreaPickerWrap>(info.Holder());
	vtkRenderedAreaPicker *native = (vtkRenderedAreaPicker *)wrapper->native.GetPointer();
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

void VtkRenderedAreaPickerWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderedAreaPickerWrap *wrapper = ObjectWrap::Unwrap<VtkRenderedAreaPickerWrap>(info.Holder());
	vtkRenderedAreaPicker *native = (vtkRenderedAreaPicker *)wrapper->native.GetPointer();
	vtkRenderedAreaPicker * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkRenderedAreaPickerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkRenderedAreaPickerWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRenderedAreaPickerWrap *w = new VtkRenderedAreaPickerWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRenderedAreaPickerWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderedAreaPickerWrap *wrapper = ObjectWrap::Unwrap<VtkRenderedAreaPickerWrap>(info.Holder());
	vtkRenderedAreaPicker *native = (vtkRenderedAreaPicker *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkRenderedAreaPicker * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkRenderedAreaPickerWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkRenderedAreaPickerWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkRenderedAreaPickerWrap *w = new VtkRenderedAreaPickerWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

