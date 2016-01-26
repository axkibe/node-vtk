/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkGraphToGlyphsWrap.h"
#include "vtkObjectWrap.h"
#include "vtkRendererWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGraphToGlyphsWrap::ptpl;

VtkGraphToGlyphsWrap::VtkGraphToGlyphsWrap()
{ }

VtkGraphToGlyphsWrap::VtkGraphToGlyphsWrap(vtkSmartPointer<vtkGraphToGlyphs> _native)
{ native = _native; }

VtkGraphToGlyphsWrap::~VtkGraphToGlyphsWrap()
{ }

void VtkGraphToGlyphsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGraphToGlyphs").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GraphToGlyphs").ToLocalChecked(), ConstructorGetter);
}

void VtkGraphToGlyphsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGraphToGlyphsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGraphToGlyphsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "FilledOff", FilledOff);
	Nan::SetPrototypeMethod(tpl, "filledOff", FilledOff);

	Nan::SetPrototypeMethod(tpl, "FilledOn", FilledOn);
	Nan::SetPrototypeMethod(tpl, "filledOn", FilledOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetGlyphType", GetGlyphType);
	Nan::SetPrototypeMethod(tpl, "getGlyphType", GetGlyphType);

	Nan::SetPrototypeMethod(tpl, "GetRenderer", GetRenderer);
	Nan::SetPrototypeMethod(tpl, "getRenderer", GetRenderer);

	Nan::SetPrototypeMethod(tpl, "GetScreenSize", GetScreenSize);
	Nan::SetPrototypeMethod(tpl, "getScreenSize", GetScreenSize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetGlyphType", SetGlyphType);
	Nan::SetPrototypeMethod(tpl, "setGlyphType", SetGlyphType);

	Nan::SetPrototypeMethod(tpl, "SetRenderer", SetRenderer);
	Nan::SetPrototypeMethod(tpl, "setRenderer", SetRenderer);

	Nan::SetPrototypeMethod(tpl, "SetScreenSize", SetScreenSize);
	Nan::SetPrototypeMethod(tpl, "setScreenSize", SetScreenSize);

	ptpl.Reset( tpl );
}

void VtkGraphToGlyphsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGraphToGlyphs> native = vtkSmartPointer<vtkGraphToGlyphs>::New();
		VtkGraphToGlyphsWrap* obj = new VtkGraphToGlyphsWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkGraphToGlyphsWrap::FilledOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphToGlyphsWrap *wrapper = ObjectWrap::Unwrap<VtkGraphToGlyphsWrap>(info.Holder());
	vtkGraphToGlyphs *native = (vtkGraphToGlyphs *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FilledOff();
}

void VtkGraphToGlyphsWrap::FilledOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphToGlyphsWrap *wrapper = ObjectWrap::Unwrap<VtkGraphToGlyphsWrap>(info.Holder());
	vtkGraphToGlyphs *native = (vtkGraphToGlyphs *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FilledOn();
}

void VtkGraphToGlyphsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphToGlyphsWrap *wrapper = ObjectWrap::Unwrap<VtkGraphToGlyphsWrap>(info.Holder());
	vtkGraphToGlyphs *native = (vtkGraphToGlyphs *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGraphToGlyphsWrap::GetGlyphType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphToGlyphsWrap *wrapper = ObjectWrap::Unwrap<VtkGraphToGlyphsWrap>(info.Holder());
	vtkGraphToGlyphs *native = (vtkGraphToGlyphs *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGlyphType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGraphToGlyphsWrap::GetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphToGlyphsWrap *wrapper = ObjectWrap::Unwrap<VtkGraphToGlyphsWrap>(info.Holder());
	vtkGraphToGlyphs *native = (vtkGraphToGlyphs *)wrapper->native.GetPointer();
	vtkRenderer * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRenderer();
		VtkRendererWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRendererWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRendererWrap *w = new VtkRendererWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGraphToGlyphsWrap::GetScreenSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphToGlyphsWrap *wrapper = ObjectWrap::Unwrap<VtkGraphToGlyphsWrap>(info.Holder());
	vtkGraphToGlyphs *native = (vtkGraphToGlyphs *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScreenSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGraphToGlyphsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphToGlyphsWrap *wrapper = ObjectWrap::Unwrap<VtkGraphToGlyphsWrap>(info.Holder());
	vtkGraphToGlyphs *native = (vtkGraphToGlyphs *)wrapper->native.GetPointer();
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

void VtkGraphToGlyphsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphToGlyphsWrap *wrapper = ObjectWrap::Unwrap<VtkGraphToGlyphsWrap>(info.Holder());
	vtkGraphToGlyphs *native = (vtkGraphToGlyphs *)wrapper->native.GetPointer();
	vtkGraphToGlyphs * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkGraphToGlyphsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGraphToGlyphsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGraphToGlyphsWrap *w = new VtkGraphToGlyphsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGraphToGlyphsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphToGlyphsWrap *wrapper = ObjectWrap::Unwrap<VtkGraphToGlyphsWrap>(info.Holder());
	vtkGraphToGlyphs *native = (vtkGraphToGlyphs *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGraphToGlyphs * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkGraphToGlyphsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGraphToGlyphsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGraphToGlyphsWrap *w = new VtkGraphToGlyphsWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphToGlyphsWrap::SetGlyphType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphToGlyphsWrap *wrapper = ObjectWrap::Unwrap<VtkGraphToGlyphsWrap>(info.Holder());
	vtkGraphToGlyphs *native = (vtkGraphToGlyphs *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGlyphType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphToGlyphsWrap::SetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphToGlyphsWrap *wrapper = ObjectWrap::Unwrap<VtkGraphToGlyphsWrap>(info.Holder());
	vtkGraphToGlyphs *native = (vtkGraphToGlyphs *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRenderer(
			(vtkRenderer *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphToGlyphsWrap::SetScreenSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphToGlyphsWrap *wrapper = ObjectWrap::Unwrap<VtkGraphToGlyphsWrap>(info.Holder());
	vtkGraphToGlyphs *native = (vtkGraphToGlyphs *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScreenSize(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

