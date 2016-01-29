/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPrimitivePainterWrap.h"
#include "vtkPolygonsPainterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPolygonsPainterWrap::ptpl;

VtkPolygonsPainterWrap::VtkPolygonsPainterWrap()
{ }

VtkPolygonsPainterWrap::VtkPolygonsPainterWrap(vtkSmartPointer<vtkPolygonsPainter> _native)
{ native = _native; }

VtkPolygonsPainterWrap::~VtkPolygonsPainterWrap()
{ }

void VtkPolygonsPainterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPolygonsPainter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PolygonsPainter").ToLocalChecked(), ConstructorGetter);
}

void VtkPolygonsPainterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPolygonsPainterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPrimitivePainterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPrimitivePainterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPolygonsPainterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

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

void VtkPolygonsPainterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPolygonsPainter> native = vtkSmartPointer<vtkPolygonsPainter>::New();
		VtkPolygonsPainterWrap* obj = new VtkPolygonsPainterWrap(native);
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

void VtkPolygonsPainterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolygonsPainterWrap *wrapper = ObjectWrap::Unwrap<VtkPolygonsPainterWrap>(info.Holder());
	vtkPolygonsPainter *native = (vtkPolygonsPainter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPolygonsPainterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolygonsPainterWrap *wrapper = ObjectWrap::Unwrap<VtkPolygonsPainterWrap>(info.Holder());
	vtkPolygonsPainter *native = (vtkPolygonsPainter *)wrapper->native.GetPointer();
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

void VtkPolygonsPainterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolygonsPainterWrap *wrapper = ObjectWrap::Unwrap<VtkPolygonsPainterWrap>(info.Holder());
	vtkPolygonsPainter *native = (vtkPolygonsPainter *)wrapper->native.GetPointer();
	vtkPolygonsPainter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkPolygonsPainterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPolygonsPainterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolygonsPainterWrap *w = new VtkPolygonsPainterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPolygonsPainterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolygonsPainterWrap *wrapper = ObjectWrap::Unwrap<VtkPolygonsPainterWrap>(info.Holder());
	vtkPolygonsPainter *native = (vtkPolygonsPainter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPolygonsPainter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkPolygonsPainterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPolygonsPainterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPolygonsPainterWrap *w = new VtkPolygonsPainterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

