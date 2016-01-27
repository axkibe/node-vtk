/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkGraphLayoutStrategyWrap.h"
#include "vtkCosmicTreeLayoutStrategyWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCosmicTreeLayoutStrategyWrap::ptpl;

VtkCosmicTreeLayoutStrategyWrap::VtkCosmicTreeLayoutStrategyWrap()
{ }

VtkCosmicTreeLayoutStrategyWrap::VtkCosmicTreeLayoutStrategyWrap(vtkSmartPointer<vtkCosmicTreeLayoutStrategy> _native)
{ native = _native; }

VtkCosmicTreeLayoutStrategyWrap::~VtkCosmicTreeLayoutStrategyWrap()
{ }

void VtkCosmicTreeLayoutStrategyWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCosmicTreeLayoutStrategy").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CosmicTreeLayoutStrategy").ToLocalChecked(), ConstructorGetter);
}

void VtkCosmicTreeLayoutStrategyWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCosmicTreeLayoutStrategyWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkGraphLayoutStrategyWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkGraphLayoutStrategyWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCosmicTreeLayoutStrategyWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetLayoutDepth", GetLayoutDepth);
	Nan::SetPrototypeMethod(tpl, "getLayoutDepth", GetLayoutDepth);

	Nan::SetPrototypeMethod(tpl, "GetNodeSizeArrayName", GetNodeSizeArrayName);
	Nan::SetPrototypeMethod(tpl, "getNodeSizeArrayName", GetNodeSizeArrayName);

	Nan::SetPrototypeMethod(tpl, "GetSizeLeafNodesOnly", GetSizeLeafNodesOnly);
	Nan::SetPrototypeMethod(tpl, "getSizeLeafNodesOnly", GetSizeLeafNodesOnly);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "Layout", Layout);
	Nan::SetPrototypeMethod(tpl, "layout", Layout);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetLayoutDepth", SetLayoutDepth);
	Nan::SetPrototypeMethod(tpl, "setLayoutDepth", SetLayoutDepth);

	Nan::SetPrototypeMethod(tpl, "SetNodeSizeArrayName", SetNodeSizeArrayName);
	Nan::SetPrototypeMethod(tpl, "setNodeSizeArrayName", SetNodeSizeArrayName);

	Nan::SetPrototypeMethod(tpl, "SetSizeLeafNodesOnly", SetSizeLeafNodesOnly);
	Nan::SetPrototypeMethod(tpl, "setSizeLeafNodesOnly", SetSizeLeafNodesOnly);

	Nan::SetPrototypeMethod(tpl, "SizeLeafNodesOnlyOff", SizeLeafNodesOnlyOff);
	Nan::SetPrototypeMethod(tpl, "sizeLeafNodesOnlyOff", SizeLeafNodesOnlyOff);

	Nan::SetPrototypeMethod(tpl, "SizeLeafNodesOnlyOn", SizeLeafNodesOnlyOn);
	Nan::SetPrototypeMethod(tpl, "sizeLeafNodesOnlyOn", SizeLeafNodesOnlyOn);

	ptpl.Reset( tpl );
}

void VtkCosmicTreeLayoutStrategyWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCosmicTreeLayoutStrategy> native = vtkSmartPointer<vtkCosmicTreeLayoutStrategy>::New();
		VtkCosmicTreeLayoutStrategyWrap* obj = new VtkCosmicTreeLayoutStrategyWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCosmicTreeLayoutStrategyWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCosmicTreeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCosmicTreeLayoutStrategyWrap>(info.Holder());
	vtkCosmicTreeLayoutStrategy *native = (vtkCosmicTreeLayoutStrategy *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCosmicTreeLayoutStrategyWrap::GetLayoutDepth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCosmicTreeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCosmicTreeLayoutStrategyWrap>(info.Holder());
	vtkCosmicTreeLayoutStrategy *native = (vtkCosmicTreeLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLayoutDepth();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCosmicTreeLayoutStrategyWrap::GetNodeSizeArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCosmicTreeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCosmicTreeLayoutStrategyWrap>(info.Holder());
	vtkCosmicTreeLayoutStrategy *native = (vtkCosmicTreeLayoutStrategy *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNodeSizeArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCosmicTreeLayoutStrategyWrap::GetSizeLeafNodesOnly(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCosmicTreeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCosmicTreeLayoutStrategyWrap>(info.Holder());
	vtkCosmicTreeLayoutStrategy *native = (vtkCosmicTreeLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSizeLeafNodesOnly();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCosmicTreeLayoutStrategyWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCosmicTreeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCosmicTreeLayoutStrategyWrap>(info.Holder());
	vtkCosmicTreeLayoutStrategy *native = (vtkCosmicTreeLayoutStrategy *)wrapper->native.GetPointer();
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

void VtkCosmicTreeLayoutStrategyWrap::Layout(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCosmicTreeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCosmicTreeLayoutStrategyWrap>(info.Holder());
	vtkCosmicTreeLayoutStrategy *native = (vtkCosmicTreeLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Layout();
}

void VtkCosmicTreeLayoutStrategyWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCosmicTreeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCosmicTreeLayoutStrategyWrap>(info.Holder());
	vtkCosmicTreeLayoutStrategy *native = (vtkCosmicTreeLayoutStrategy *)wrapper->native.GetPointer();
	vtkCosmicTreeLayoutStrategy * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkCosmicTreeLayoutStrategyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCosmicTreeLayoutStrategyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCosmicTreeLayoutStrategyWrap *w = new VtkCosmicTreeLayoutStrategyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCosmicTreeLayoutStrategyWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCosmicTreeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCosmicTreeLayoutStrategyWrap>(info.Holder());
	vtkCosmicTreeLayoutStrategy *native = (vtkCosmicTreeLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCosmicTreeLayoutStrategy * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkCosmicTreeLayoutStrategyWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCosmicTreeLayoutStrategyWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCosmicTreeLayoutStrategyWrap *w = new VtkCosmicTreeLayoutStrategyWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCosmicTreeLayoutStrategyWrap::SetLayoutDepth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCosmicTreeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCosmicTreeLayoutStrategyWrap>(info.Holder());
	vtkCosmicTreeLayoutStrategy *native = (vtkCosmicTreeLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLayoutDepth(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCosmicTreeLayoutStrategyWrap::SetNodeSizeArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCosmicTreeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCosmicTreeLayoutStrategyWrap>(info.Holder());
	vtkCosmicTreeLayoutStrategy *native = (vtkCosmicTreeLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNodeSizeArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCosmicTreeLayoutStrategyWrap::SetSizeLeafNodesOnly(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCosmicTreeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCosmicTreeLayoutStrategyWrap>(info.Holder());
	vtkCosmicTreeLayoutStrategy *native = (vtkCosmicTreeLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSizeLeafNodesOnly(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCosmicTreeLayoutStrategyWrap::SizeLeafNodesOnlyOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCosmicTreeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCosmicTreeLayoutStrategyWrap>(info.Holder());
	vtkCosmicTreeLayoutStrategy *native = (vtkCosmicTreeLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SizeLeafNodesOnlyOff();
}

void VtkCosmicTreeLayoutStrategyWrap::SizeLeafNodesOnlyOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCosmicTreeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCosmicTreeLayoutStrategyWrap>(info.Holder());
	vtkCosmicTreeLayoutStrategy *native = (vtkCosmicTreeLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SizeLeafNodesOnlyOn();
}

