/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataPainterWrap.h"
#include "vtkChooserPainterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkChooserPainterWrap::ptpl;

VtkChooserPainterWrap::VtkChooserPainterWrap()
{ }

VtkChooserPainterWrap::VtkChooserPainterWrap(vtkSmartPointer<vtkChooserPainter> _native)
{ native = _native; }

VtkChooserPainterWrap::~VtkChooserPainterWrap()
{ }

void VtkChooserPainterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkChooserPainter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ChooserPainter").ToLocalChecked(), ConstructorGetter);
}

void VtkChooserPainterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkChooserPainterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataPainterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataPainterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkChooserPainterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetUseLinesPainterForWireframes", GetUseLinesPainterForWireframes);
	Nan::SetPrototypeMethod(tpl, "getUseLinesPainterForWireframes", GetUseLinesPainterForWireframes);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetLinePainter", SetLinePainter);
	Nan::SetPrototypeMethod(tpl, "setLinePainter", SetLinePainter);

	Nan::SetPrototypeMethod(tpl, "SetPolyPainter", SetPolyPainter);
	Nan::SetPrototypeMethod(tpl, "setPolyPainter", SetPolyPainter);

	Nan::SetPrototypeMethod(tpl, "SetStripPainter", SetStripPainter);
	Nan::SetPrototypeMethod(tpl, "setStripPainter", SetStripPainter);

	Nan::SetPrototypeMethod(tpl, "SetUseLinesPainterForWireframes", SetUseLinesPainterForWireframes);
	Nan::SetPrototypeMethod(tpl, "setUseLinesPainterForWireframes", SetUseLinesPainterForWireframes);

	Nan::SetPrototypeMethod(tpl, "SetVertPainter", SetVertPainter);
	Nan::SetPrototypeMethod(tpl, "setVertPainter", SetVertPainter);

	Nan::SetPrototypeMethod(tpl, "UseLinesPainterForWireframesOff", UseLinesPainterForWireframesOff);
	Nan::SetPrototypeMethod(tpl, "useLinesPainterForWireframesOff", UseLinesPainterForWireframesOff);

	Nan::SetPrototypeMethod(tpl, "UseLinesPainterForWireframesOn", UseLinesPainterForWireframesOn);
	Nan::SetPrototypeMethod(tpl, "useLinesPainterForWireframesOn", UseLinesPainterForWireframesOn);

	ptpl.Reset( tpl );
}

void VtkChooserPainterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkChooserPainter> native = vtkSmartPointer<vtkChooserPainter>::New();
		VtkChooserPainterWrap* obj = new VtkChooserPainterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkChooserPainterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChooserPainterWrap *wrapper = ObjectWrap::Unwrap<VtkChooserPainterWrap>(info.Holder());
	vtkChooserPainter *native = (vtkChooserPainter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkChooserPainterWrap::GetUseLinesPainterForWireframes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChooserPainterWrap *wrapper = ObjectWrap::Unwrap<VtkChooserPainterWrap>(info.Holder());
	vtkChooserPainter *native = (vtkChooserPainter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseLinesPainterForWireframes();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkChooserPainterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChooserPainterWrap *wrapper = ObjectWrap::Unwrap<VtkChooserPainterWrap>(info.Holder());
	vtkChooserPainter *native = (vtkChooserPainter *)wrapper->native.GetPointer();
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

void VtkChooserPainterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChooserPainterWrap *wrapper = ObjectWrap::Unwrap<VtkChooserPainterWrap>(info.Holder());
	vtkChooserPainter *native = (vtkChooserPainter *)wrapper->native.GetPointer();
	vtkChooserPainter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkChooserPainterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkChooserPainterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkChooserPainterWrap *w = new VtkChooserPainterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkChooserPainterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChooserPainterWrap *wrapper = ObjectWrap::Unwrap<VtkChooserPainterWrap>(info.Holder());
	vtkChooserPainter *native = (vtkChooserPainter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkChooserPainter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkChooserPainterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkChooserPainterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkChooserPainterWrap *w = new VtkChooserPainterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChooserPainterWrap::SetLinePainter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChooserPainterWrap *wrapper = ObjectWrap::Unwrap<VtkChooserPainterWrap>(info.Holder());
	vtkChooserPainter *native = (vtkChooserPainter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPolyDataPainterWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPolyDataPainterWrap *a0 = ObjectWrap::Unwrap<VtkPolyDataPainterWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLinePainter(
			(vtkPolyDataPainter *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChooserPainterWrap::SetPolyPainter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChooserPainterWrap *wrapper = ObjectWrap::Unwrap<VtkChooserPainterWrap>(info.Holder());
	vtkChooserPainter *native = (vtkChooserPainter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPolyDataPainterWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPolyDataPainterWrap *a0 = ObjectWrap::Unwrap<VtkPolyDataPainterWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPolyPainter(
			(vtkPolyDataPainter *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChooserPainterWrap::SetStripPainter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChooserPainterWrap *wrapper = ObjectWrap::Unwrap<VtkChooserPainterWrap>(info.Holder());
	vtkChooserPainter *native = (vtkChooserPainter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPolyDataPainterWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPolyDataPainterWrap *a0 = ObjectWrap::Unwrap<VtkPolyDataPainterWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetStripPainter(
			(vtkPolyDataPainter *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChooserPainterWrap::SetUseLinesPainterForWireframes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChooserPainterWrap *wrapper = ObjectWrap::Unwrap<VtkChooserPainterWrap>(info.Holder());
	vtkChooserPainter *native = (vtkChooserPainter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseLinesPainterForWireframes(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChooserPainterWrap::SetVertPainter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChooserPainterWrap *wrapper = ObjectWrap::Unwrap<VtkChooserPainterWrap>(info.Holder());
	vtkChooserPainter *native = (vtkChooserPainter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPolyDataPainterWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPolyDataPainterWrap *a0 = ObjectWrap::Unwrap<VtkPolyDataPainterWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVertPainter(
			(vtkPolyDataPainter *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChooserPainterWrap::UseLinesPainterForWireframesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChooserPainterWrap *wrapper = ObjectWrap::Unwrap<VtkChooserPainterWrap>(info.Holder());
	vtkChooserPainter *native = (vtkChooserPainter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseLinesPainterForWireframesOff();
}

void VtkChooserPainterWrap::UseLinesPainterForWireframesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChooserPainterWrap *wrapper = ObjectWrap::Unwrap<VtkChooserPainterWrap>(info.Holder());
	vtkChooserPainter *native = (vtkChooserPainter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseLinesPainterForWireframesOn();
}

