/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkEdgeLayoutStrategyWrap.h"
#include "vtkArcParallelEdgeStrategyWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkArcParallelEdgeStrategyWrap::ptpl;

VtkArcParallelEdgeStrategyWrap::VtkArcParallelEdgeStrategyWrap()
{ }

VtkArcParallelEdgeStrategyWrap::VtkArcParallelEdgeStrategyWrap(vtkSmartPointer<vtkArcParallelEdgeStrategy> _native)
{ native = _native; }

VtkArcParallelEdgeStrategyWrap::~VtkArcParallelEdgeStrategyWrap()
{ }

void VtkArcParallelEdgeStrategyWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkArcParallelEdgeStrategy").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ArcParallelEdgeStrategy").ToLocalChecked(), ConstructorGetter);
}

void VtkArcParallelEdgeStrategyWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkArcParallelEdgeStrategyWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkEdgeLayoutStrategyWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkEdgeLayoutStrategyWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkArcParallelEdgeStrategyWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfSubdivisions", GetNumberOfSubdivisions);
	Nan::SetPrototypeMethod(tpl, "getNumberOfSubdivisions", GetNumberOfSubdivisions);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "Layout", Layout);
	Nan::SetPrototypeMethod(tpl, "layout", Layout);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfSubdivisions", SetNumberOfSubdivisions);
	Nan::SetPrototypeMethod(tpl, "setNumberOfSubdivisions", SetNumberOfSubdivisions);

	ptpl.Reset( tpl );
}

void VtkArcParallelEdgeStrategyWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkArcParallelEdgeStrategy> native = vtkSmartPointer<vtkArcParallelEdgeStrategy>::New();
		VtkArcParallelEdgeStrategyWrap* obj = new VtkArcParallelEdgeStrategyWrap(native);
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

void VtkArcParallelEdgeStrategyWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcParallelEdgeStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkArcParallelEdgeStrategyWrap>(info.Holder());
	vtkArcParallelEdgeStrategy *native = (vtkArcParallelEdgeStrategy *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkArcParallelEdgeStrategyWrap::GetNumberOfSubdivisions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcParallelEdgeStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkArcParallelEdgeStrategyWrap>(info.Holder());
	vtkArcParallelEdgeStrategy *native = (vtkArcParallelEdgeStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfSubdivisions();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArcParallelEdgeStrategyWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcParallelEdgeStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkArcParallelEdgeStrategyWrap>(info.Holder());
	vtkArcParallelEdgeStrategy *native = (vtkArcParallelEdgeStrategy *)wrapper->native.GetPointer();
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

void VtkArcParallelEdgeStrategyWrap::Layout(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcParallelEdgeStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkArcParallelEdgeStrategyWrap>(info.Holder());
	vtkArcParallelEdgeStrategy *native = (vtkArcParallelEdgeStrategy *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Layout();
}

void VtkArcParallelEdgeStrategyWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcParallelEdgeStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkArcParallelEdgeStrategyWrap>(info.Holder());
	vtkArcParallelEdgeStrategy *native = (vtkArcParallelEdgeStrategy *)wrapper->native.GetPointer();
	vtkArcParallelEdgeStrategy * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkArcParallelEdgeStrategyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkArcParallelEdgeStrategyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkArcParallelEdgeStrategyWrap *w = new VtkArcParallelEdgeStrategyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkArcParallelEdgeStrategyWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcParallelEdgeStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkArcParallelEdgeStrategyWrap>(info.Holder());
	vtkArcParallelEdgeStrategy *native = (vtkArcParallelEdgeStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkArcParallelEdgeStrategy * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkArcParallelEdgeStrategyWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkArcParallelEdgeStrategyWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkArcParallelEdgeStrategyWrap *w = new VtkArcParallelEdgeStrategyWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArcParallelEdgeStrategyWrap::SetNumberOfSubdivisions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcParallelEdgeStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkArcParallelEdgeStrategyWrap>(info.Holder());
	vtkArcParallelEdgeStrategy *native = (vtkArcParallelEdgeStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfSubdivisions(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

