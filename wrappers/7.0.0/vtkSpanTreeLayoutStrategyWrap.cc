/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkGraphLayoutStrategyWrap.h"
#include "vtkSpanTreeLayoutStrategyWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSpanTreeLayoutStrategyWrap::ptpl;

VtkSpanTreeLayoutStrategyWrap::VtkSpanTreeLayoutStrategyWrap()
{ }

VtkSpanTreeLayoutStrategyWrap::VtkSpanTreeLayoutStrategyWrap(vtkSmartPointer<vtkSpanTreeLayoutStrategy> _native)
{ native = _native; }

VtkSpanTreeLayoutStrategyWrap::~VtkSpanTreeLayoutStrategyWrap()
{ }

void VtkSpanTreeLayoutStrategyWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSpanTreeLayoutStrategy").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SpanTreeLayoutStrategy").ToLocalChecked(), ConstructorGetter);
}

void VtkSpanTreeLayoutStrategyWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSpanTreeLayoutStrategyWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkGraphLayoutStrategyWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkGraphLayoutStrategyWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSpanTreeLayoutStrategyWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "DepthFirstSpanningTreeOff", DepthFirstSpanningTreeOff);
	Nan::SetPrototypeMethod(tpl, "depthFirstSpanningTreeOff", DepthFirstSpanningTreeOff);

	Nan::SetPrototypeMethod(tpl, "DepthFirstSpanningTreeOn", DepthFirstSpanningTreeOn);
	Nan::SetPrototypeMethod(tpl, "depthFirstSpanningTreeOn", DepthFirstSpanningTreeOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDepthFirstSpanningTree", GetDepthFirstSpanningTree);
	Nan::SetPrototypeMethod(tpl, "getDepthFirstSpanningTree", GetDepthFirstSpanningTree);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "Layout", Layout);
	Nan::SetPrototypeMethod(tpl, "layout", Layout);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDepthFirstSpanningTree", SetDepthFirstSpanningTree);
	Nan::SetPrototypeMethod(tpl, "setDepthFirstSpanningTree", SetDepthFirstSpanningTree);

#ifdef VTK_NODE_PLUS_VTKSPANTREELAYOUTSTRATEGYWRAP_INITPTPL
	VTK_NODE_PLUS_VTKSPANTREELAYOUTSTRATEGYWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkSpanTreeLayoutStrategyWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSpanTreeLayoutStrategy> native = vtkSmartPointer<vtkSpanTreeLayoutStrategy>::New();
		VtkSpanTreeLayoutStrategyWrap* obj = new VtkSpanTreeLayoutStrategyWrap(native);
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

void VtkSpanTreeLayoutStrategyWrap::DepthFirstSpanningTreeOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpanTreeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkSpanTreeLayoutStrategyWrap>(info.Holder());
	vtkSpanTreeLayoutStrategy *native = (vtkSpanTreeLayoutStrategy *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DepthFirstSpanningTreeOff();
}

void VtkSpanTreeLayoutStrategyWrap::DepthFirstSpanningTreeOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpanTreeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkSpanTreeLayoutStrategyWrap>(info.Holder());
	vtkSpanTreeLayoutStrategy *native = (vtkSpanTreeLayoutStrategy *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DepthFirstSpanningTreeOn();
}

void VtkSpanTreeLayoutStrategyWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpanTreeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkSpanTreeLayoutStrategyWrap>(info.Holder());
	vtkSpanTreeLayoutStrategy *native = (vtkSpanTreeLayoutStrategy *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSpanTreeLayoutStrategyWrap::GetDepthFirstSpanningTree(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpanTreeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkSpanTreeLayoutStrategyWrap>(info.Holder());
	vtkSpanTreeLayoutStrategy *native = (vtkSpanTreeLayoutStrategy *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDepthFirstSpanningTree();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSpanTreeLayoutStrategyWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpanTreeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkSpanTreeLayoutStrategyWrap>(info.Holder());
	vtkSpanTreeLayoutStrategy *native = (vtkSpanTreeLayoutStrategy *)wrapper->native.GetPointer();
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

void VtkSpanTreeLayoutStrategyWrap::Layout(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpanTreeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkSpanTreeLayoutStrategyWrap>(info.Holder());
	vtkSpanTreeLayoutStrategy *native = (vtkSpanTreeLayoutStrategy *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Layout();
}

void VtkSpanTreeLayoutStrategyWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpanTreeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkSpanTreeLayoutStrategyWrap>(info.Holder());
	vtkSpanTreeLayoutStrategy *native = (vtkSpanTreeLayoutStrategy *)wrapper->native.GetPointer();
	vtkSpanTreeLayoutStrategy * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkSpanTreeLayoutStrategyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSpanTreeLayoutStrategyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSpanTreeLayoutStrategyWrap *w = new VtkSpanTreeLayoutStrategyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSpanTreeLayoutStrategyWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpanTreeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkSpanTreeLayoutStrategyWrap>(info.Holder());
	vtkSpanTreeLayoutStrategy *native = (vtkSpanTreeLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSpanTreeLayoutStrategy * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkSpanTreeLayoutStrategyWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSpanTreeLayoutStrategyWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSpanTreeLayoutStrategyWrap *w = new VtkSpanTreeLayoutStrategyWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSpanTreeLayoutStrategyWrap::SetDepthFirstSpanningTree(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpanTreeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkSpanTreeLayoutStrategyWrap>(info.Holder());
	vtkSpanTreeLayoutStrategy *native = (vtkSpanTreeLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDepthFirstSpanningTree(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

