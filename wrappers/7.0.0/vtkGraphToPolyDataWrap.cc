/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkGraphToPolyDataWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGraphToPolyDataWrap::ptpl;

VtkGraphToPolyDataWrap::VtkGraphToPolyDataWrap()
{ }

VtkGraphToPolyDataWrap::VtkGraphToPolyDataWrap(vtkSmartPointer<vtkGraphToPolyData> _native)
{ native = _native; }

VtkGraphToPolyDataWrap::~VtkGraphToPolyDataWrap()
{ }

void VtkGraphToPolyDataWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGraphToPolyData").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GraphToPolyData").ToLocalChecked(), ConstructorGetter);
}

void VtkGraphToPolyDataWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGraphToPolyDataWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGraphToPolyDataWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "EdgeGlyphOutputOff", EdgeGlyphOutputOff);
	Nan::SetPrototypeMethod(tpl, "edgeGlyphOutputOff", EdgeGlyphOutputOff);

	Nan::SetPrototypeMethod(tpl, "EdgeGlyphOutputOn", EdgeGlyphOutputOn);
	Nan::SetPrototypeMethod(tpl, "edgeGlyphOutputOn", EdgeGlyphOutputOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetEdgeGlyphOutput", GetEdgeGlyphOutput);
	Nan::SetPrototypeMethod(tpl, "getEdgeGlyphOutput", GetEdgeGlyphOutput);

	Nan::SetPrototypeMethod(tpl, "GetEdgeGlyphPosition", GetEdgeGlyphPosition);
	Nan::SetPrototypeMethod(tpl, "getEdgeGlyphPosition", GetEdgeGlyphPosition);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetEdgeGlyphOutput", SetEdgeGlyphOutput);
	Nan::SetPrototypeMethod(tpl, "setEdgeGlyphOutput", SetEdgeGlyphOutput);

	Nan::SetPrototypeMethod(tpl, "SetEdgeGlyphPosition", SetEdgeGlyphPosition);
	Nan::SetPrototypeMethod(tpl, "setEdgeGlyphPosition", SetEdgeGlyphPosition);

#ifdef VTK_NODE_PLUS_VTKGRAPHTOPOLYDATAWRAP_INITPTPL
	VTK_NODE_PLUS_VTKGRAPHTOPOLYDATAWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkGraphToPolyDataWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGraphToPolyData> native = vtkSmartPointer<vtkGraphToPolyData>::New();
		VtkGraphToPolyDataWrap* obj = new VtkGraphToPolyDataWrap(native);
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

void VtkGraphToPolyDataWrap::EdgeGlyphOutputOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkGraphToPolyDataWrap>(info.Holder());
	vtkGraphToPolyData *native = (vtkGraphToPolyData *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EdgeGlyphOutputOff();
}

void VtkGraphToPolyDataWrap::EdgeGlyphOutputOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkGraphToPolyDataWrap>(info.Holder());
	vtkGraphToPolyData *native = (vtkGraphToPolyData *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EdgeGlyphOutputOn();
}

void VtkGraphToPolyDataWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkGraphToPolyDataWrap>(info.Holder());
	vtkGraphToPolyData *native = (vtkGraphToPolyData *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGraphToPolyDataWrap::GetEdgeGlyphOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkGraphToPolyDataWrap>(info.Holder());
	vtkGraphToPolyData *native = (vtkGraphToPolyData *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEdgeGlyphOutput();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGraphToPolyDataWrap::GetEdgeGlyphPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkGraphToPolyDataWrap>(info.Holder());
	vtkGraphToPolyData *native = (vtkGraphToPolyData *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEdgeGlyphPosition();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGraphToPolyDataWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkGraphToPolyDataWrap>(info.Holder());
	vtkGraphToPolyData *native = (vtkGraphToPolyData *)wrapper->native.GetPointer();
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

void VtkGraphToPolyDataWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkGraphToPolyDataWrap>(info.Holder());
	vtkGraphToPolyData *native = (vtkGraphToPolyData *)wrapper->native.GetPointer();
	vtkGraphToPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkGraphToPolyDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGraphToPolyDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGraphToPolyDataWrap *w = new VtkGraphToPolyDataWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGraphToPolyDataWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkGraphToPolyDataWrap>(info.Holder());
	vtkGraphToPolyData *native = (vtkGraphToPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGraphToPolyData * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkGraphToPolyDataWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGraphToPolyDataWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGraphToPolyDataWrap *w = new VtkGraphToPolyDataWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphToPolyDataWrap::SetEdgeGlyphOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkGraphToPolyDataWrap>(info.Holder());
	vtkGraphToPolyData *native = (vtkGraphToPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEdgeGlyphOutput(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphToPolyDataWrap::SetEdgeGlyphPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkGraphToPolyDataWrap>(info.Holder());
	vtkGraphToPolyData *native = (vtkGraphToPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEdgeGlyphPosition(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

