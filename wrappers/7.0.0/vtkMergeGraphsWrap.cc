/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkGraphAlgorithmWrap.h"
#include "vtkMergeGraphsWrap.h"
#include "vtkObjectWrap.h"
#include "vtkMutableGraphHelperWrap.h"
#include "vtkGraphWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkMergeGraphsWrap::ptpl;

VtkMergeGraphsWrap::VtkMergeGraphsWrap()
{ }

VtkMergeGraphsWrap::VtkMergeGraphsWrap(vtkSmartPointer<vtkMergeGraphs> _native)
{ native = _native; }

VtkMergeGraphsWrap::~VtkMergeGraphsWrap()
{ }

void VtkMergeGraphsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkMergeGraphs").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("MergeGraphs").ToLocalChecked(), ConstructorGetter);
}

void VtkMergeGraphsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkMergeGraphsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkGraphAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkGraphAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkMergeGraphsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ExtendGraph", ExtendGraph);
	Nan::SetPrototypeMethod(tpl, "extendGraph", ExtendGraph);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetEdgeWindow", GetEdgeWindow);
	Nan::SetPrototypeMethod(tpl, "getEdgeWindow", GetEdgeWindow);

	Nan::SetPrototypeMethod(tpl, "GetEdgeWindowArrayName", GetEdgeWindowArrayName);
	Nan::SetPrototypeMethod(tpl, "getEdgeWindowArrayName", GetEdgeWindowArrayName);

	Nan::SetPrototypeMethod(tpl, "GetUseEdgeWindow", GetUseEdgeWindow);
	Nan::SetPrototypeMethod(tpl, "getUseEdgeWindow", GetUseEdgeWindow);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetEdgeWindow", SetEdgeWindow);
	Nan::SetPrototypeMethod(tpl, "setEdgeWindow", SetEdgeWindow);

	Nan::SetPrototypeMethod(tpl, "SetEdgeWindowArrayName", SetEdgeWindowArrayName);
	Nan::SetPrototypeMethod(tpl, "setEdgeWindowArrayName", SetEdgeWindowArrayName);

	Nan::SetPrototypeMethod(tpl, "SetUseEdgeWindow", SetUseEdgeWindow);
	Nan::SetPrototypeMethod(tpl, "setUseEdgeWindow", SetUseEdgeWindow);

	Nan::SetPrototypeMethod(tpl, "UseEdgeWindowOff", UseEdgeWindowOff);
	Nan::SetPrototypeMethod(tpl, "useEdgeWindowOff", UseEdgeWindowOff);

	Nan::SetPrototypeMethod(tpl, "UseEdgeWindowOn", UseEdgeWindowOn);
	Nan::SetPrototypeMethod(tpl, "useEdgeWindowOn", UseEdgeWindowOn);

	ptpl.Reset( tpl );
}

void VtkMergeGraphsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkMergeGraphs> native = vtkSmartPointer<vtkMergeGraphs>::New();
		VtkMergeGraphsWrap* obj = new VtkMergeGraphsWrap(native);
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

void VtkMergeGraphsWrap::ExtendGraph(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeGraphsWrap *wrapper = ObjectWrap::Unwrap<VtkMergeGraphsWrap>(info.Holder());
	vtkMergeGraphs *native = (vtkMergeGraphs *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMutableGraphHelperWrap::ptpl))->HasInstance(info[0]))
	{
		VtkMutableGraphHelperWrap *a0 = ObjectWrap::Unwrap<VtkMutableGraphHelperWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkGraphWrap::ptpl))->HasInstance(info[1]))
		{
			VtkGraphWrap *a1 = ObjectWrap::Unwrap<VtkGraphWrap>(info[1]->ToObject());
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->ExtendGraph(
				(vtkMutableGraphHelper *) a0->native.GetPointer(),
				(vtkGraph *) a1->native.GetPointer()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMergeGraphsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeGraphsWrap *wrapper = ObjectWrap::Unwrap<VtkMergeGraphsWrap>(info.Holder());
	vtkMergeGraphs *native = (vtkMergeGraphs *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMergeGraphsWrap::GetEdgeWindow(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeGraphsWrap *wrapper = ObjectWrap::Unwrap<VtkMergeGraphsWrap>(info.Holder());
	vtkMergeGraphs *native = (vtkMergeGraphs *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEdgeWindow();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMergeGraphsWrap::GetEdgeWindowArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeGraphsWrap *wrapper = ObjectWrap::Unwrap<VtkMergeGraphsWrap>(info.Holder());
	vtkMergeGraphs *native = (vtkMergeGraphs *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEdgeWindowArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMergeGraphsWrap::GetUseEdgeWindow(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeGraphsWrap *wrapper = ObjectWrap::Unwrap<VtkMergeGraphsWrap>(info.Holder());
	vtkMergeGraphs *native = (vtkMergeGraphs *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseEdgeWindow();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMergeGraphsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeGraphsWrap *wrapper = ObjectWrap::Unwrap<VtkMergeGraphsWrap>(info.Holder());
	vtkMergeGraphs *native = (vtkMergeGraphs *)wrapper->native.GetPointer();
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

void VtkMergeGraphsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeGraphsWrap *wrapper = ObjectWrap::Unwrap<VtkMergeGraphsWrap>(info.Holder());
	vtkMergeGraphs *native = (vtkMergeGraphs *)wrapper->native.GetPointer();
	vtkMergeGraphs * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkMergeGraphsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMergeGraphsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMergeGraphsWrap *w = new VtkMergeGraphsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMergeGraphsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeGraphsWrap *wrapper = ObjectWrap::Unwrap<VtkMergeGraphsWrap>(info.Holder());
	vtkMergeGraphs *native = (vtkMergeGraphs *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkMergeGraphs * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkMergeGraphsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkMergeGraphsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMergeGraphsWrap *w = new VtkMergeGraphsWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMergeGraphsWrap::SetEdgeWindow(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeGraphsWrap *wrapper = ObjectWrap::Unwrap<VtkMergeGraphsWrap>(info.Holder());
	vtkMergeGraphs *native = (vtkMergeGraphs *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEdgeWindow(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMergeGraphsWrap::SetEdgeWindowArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeGraphsWrap *wrapper = ObjectWrap::Unwrap<VtkMergeGraphsWrap>(info.Holder());
	vtkMergeGraphs *native = (vtkMergeGraphs *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEdgeWindowArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMergeGraphsWrap::SetUseEdgeWindow(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeGraphsWrap *wrapper = ObjectWrap::Unwrap<VtkMergeGraphsWrap>(info.Holder());
	vtkMergeGraphs *native = (vtkMergeGraphs *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseEdgeWindow(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMergeGraphsWrap::UseEdgeWindowOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeGraphsWrap *wrapper = ObjectWrap::Unwrap<VtkMergeGraphsWrap>(info.Holder());
	vtkMergeGraphs *native = (vtkMergeGraphs *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseEdgeWindowOff();
}

void VtkMergeGraphsWrap::UseEdgeWindowOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeGraphsWrap *wrapper = ObjectWrap::Unwrap<VtkMergeGraphsWrap>(info.Holder());
	vtkMergeGraphs *native = (vtkMergeGraphs *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseEdgeWindowOn();
}

