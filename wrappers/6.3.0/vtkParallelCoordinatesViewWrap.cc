/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkRenderViewWrap.h"
#include "vtkParallelCoordinatesViewWrap.h"
#include "vtkObjectWrap.h"
#include "vtkViewThemeWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkParallelCoordinatesViewWrap::ptpl;

VtkParallelCoordinatesViewWrap::VtkParallelCoordinatesViewWrap()
{ }

VtkParallelCoordinatesViewWrap::VtkParallelCoordinatesViewWrap(vtkSmartPointer<vtkParallelCoordinatesView> _native)
{ native = _native; }

VtkParallelCoordinatesViewWrap::~VtkParallelCoordinatesViewWrap()
{ }

void VtkParallelCoordinatesViewWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkParallelCoordinatesView").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ParallelCoordinatesView").ToLocalChecked(), ConstructorGetter);
}

void VtkParallelCoordinatesViewWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkParallelCoordinatesViewWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkRenderViewWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkRenderViewWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkParallelCoordinatesViewWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ApplyViewTheme", ApplyViewTheme);
	Nan::SetPrototypeMethod(tpl, "applyViewTheme", ApplyViewTheme);

	Nan::SetPrototypeMethod(tpl, "GetBrushMode", GetBrushMode);
	Nan::SetPrototypeMethod(tpl, "getBrushMode", GetBrushMode);

	Nan::SetPrototypeMethod(tpl, "GetBrushOperator", GetBrushOperator);
	Nan::SetPrototypeMethod(tpl, "getBrushOperator", GetBrushOperator);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCurrentBrushClass", GetCurrentBrushClass);
	Nan::SetPrototypeMethod(tpl, "getCurrentBrushClass", GetCurrentBrushClass);

	Nan::SetPrototypeMethod(tpl, "GetInspectMode", GetInspectMode);
	Nan::SetPrototypeMethod(tpl, "getInspectMode", GetInspectMode);

	Nan::SetPrototypeMethod(tpl, "GetMaximumNumberOfBrushPoints", GetMaximumNumberOfBrushPoints);
	Nan::SetPrototypeMethod(tpl, "getMaximumNumberOfBrushPoints", GetMaximumNumberOfBrushPoints);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBrushMode", SetBrushMode);
	Nan::SetPrototypeMethod(tpl, "setBrushMode", SetBrushMode);

	Nan::SetPrototypeMethod(tpl, "SetBrushModeToAngle", SetBrushModeToAngle);
	Nan::SetPrototypeMethod(tpl, "setBrushModeToAngle", SetBrushModeToAngle);

	Nan::SetPrototypeMethod(tpl, "SetBrushModeToAxisThreshold", SetBrushModeToAxisThreshold);
	Nan::SetPrototypeMethod(tpl, "setBrushModeToAxisThreshold", SetBrushModeToAxisThreshold);

	Nan::SetPrototypeMethod(tpl, "SetBrushModeToFunction", SetBrushModeToFunction);
	Nan::SetPrototypeMethod(tpl, "setBrushModeToFunction", SetBrushModeToFunction);

	Nan::SetPrototypeMethod(tpl, "SetBrushModeToLasso", SetBrushModeToLasso);
	Nan::SetPrototypeMethod(tpl, "setBrushModeToLasso", SetBrushModeToLasso);

	Nan::SetPrototypeMethod(tpl, "SetBrushOperator", SetBrushOperator);
	Nan::SetPrototypeMethod(tpl, "setBrushOperator", SetBrushOperator);

	Nan::SetPrototypeMethod(tpl, "SetBrushOperatorToAdd", SetBrushOperatorToAdd);
	Nan::SetPrototypeMethod(tpl, "setBrushOperatorToAdd", SetBrushOperatorToAdd);

	Nan::SetPrototypeMethod(tpl, "SetBrushOperatorToIntersect", SetBrushOperatorToIntersect);
	Nan::SetPrototypeMethod(tpl, "setBrushOperatorToIntersect", SetBrushOperatorToIntersect);

	Nan::SetPrototypeMethod(tpl, "SetBrushOperatorToReplace", SetBrushOperatorToReplace);
	Nan::SetPrototypeMethod(tpl, "setBrushOperatorToReplace", SetBrushOperatorToReplace);

	Nan::SetPrototypeMethod(tpl, "SetBrushOperatorToSubtract", SetBrushOperatorToSubtract);
	Nan::SetPrototypeMethod(tpl, "setBrushOperatorToSubtract", SetBrushOperatorToSubtract);

	Nan::SetPrototypeMethod(tpl, "SetCurrentBrushClass", SetCurrentBrushClass);
	Nan::SetPrototypeMethod(tpl, "setCurrentBrushClass", SetCurrentBrushClass);

	Nan::SetPrototypeMethod(tpl, "SetInpsectModeToSelectData", SetInpsectModeToSelectData);
	Nan::SetPrototypeMethod(tpl, "setInpsectModeToSelectData", SetInpsectModeToSelectData);

	Nan::SetPrototypeMethod(tpl, "SetInspectMode", SetInspectMode);
	Nan::SetPrototypeMethod(tpl, "setInspectMode", SetInspectMode);

	Nan::SetPrototypeMethod(tpl, "SetInspectModeToManipulateAxes", SetInspectModeToManipulateAxes);
	Nan::SetPrototypeMethod(tpl, "setInspectModeToManipulateAxes", SetInspectModeToManipulateAxes);

	Nan::SetPrototypeMethod(tpl, "SetMaximumNumberOfBrushPoints", SetMaximumNumberOfBrushPoints);
	Nan::SetPrototypeMethod(tpl, "setMaximumNumberOfBrushPoints", SetMaximumNumberOfBrushPoints);

	ptpl.Reset( tpl );
}

void VtkParallelCoordinatesViewWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkParallelCoordinatesView> native = vtkSmartPointer<vtkParallelCoordinatesView>::New();
		VtkParallelCoordinatesViewWrap* obj = new VtkParallelCoordinatesViewWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkParallelCoordinatesViewWrap::ApplyViewTheme(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesViewWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesViewWrap>(info.Holder());
	vtkParallelCoordinatesView *native = (vtkParallelCoordinatesView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewThemeWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewThemeWrap *a0 = ObjectWrap::Unwrap<VtkViewThemeWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ApplyViewTheme(
			(vtkViewTheme *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParallelCoordinatesViewWrap::GetBrushMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesViewWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesViewWrap>(info.Holder());
	vtkParallelCoordinatesView *native = (vtkParallelCoordinatesView *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBrushMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParallelCoordinatesViewWrap::GetBrushOperator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesViewWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesViewWrap>(info.Holder());
	vtkParallelCoordinatesView *native = (vtkParallelCoordinatesView *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBrushOperator();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParallelCoordinatesViewWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesViewWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesViewWrap>(info.Holder());
	vtkParallelCoordinatesView *native = (vtkParallelCoordinatesView *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkParallelCoordinatesViewWrap::GetCurrentBrushClass(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesViewWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesViewWrap>(info.Holder());
	vtkParallelCoordinatesView *native = (vtkParallelCoordinatesView *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCurrentBrushClass();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParallelCoordinatesViewWrap::GetInspectMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesViewWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesViewWrap>(info.Holder());
	vtkParallelCoordinatesView *native = (vtkParallelCoordinatesView *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInspectMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParallelCoordinatesViewWrap::GetMaximumNumberOfBrushPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesViewWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesViewWrap>(info.Holder());
	vtkParallelCoordinatesView *native = (vtkParallelCoordinatesView *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumNumberOfBrushPoints();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParallelCoordinatesViewWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesViewWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesViewWrap>(info.Holder());
	vtkParallelCoordinatesView *native = (vtkParallelCoordinatesView *)wrapper->native.GetPointer();
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

void VtkParallelCoordinatesViewWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesViewWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesViewWrap>(info.Holder());
	vtkParallelCoordinatesView *native = (vtkParallelCoordinatesView *)wrapper->native.GetPointer();
	vtkParallelCoordinatesView * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkParallelCoordinatesViewWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkParallelCoordinatesViewWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkParallelCoordinatesViewWrap *w = new VtkParallelCoordinatesViewWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkParallelCoordinatesViewWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesViewWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesViewWrap>(info.Holder());
	vtkParallelCoordinatesView *native = (vtkParallelCoordinatesView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkParallelCoordinatesView * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkParallelCoordinatesViewWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkParallelCoordinatesViewWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkParallelCoordinatesViewWrap *w = new VtkParallelCoordinatesViewWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParallelCoordinatesViewWrap::SetBrushMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesViewWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesViewWrap>(info.Holder());
	vtkParallelCoordinatesView *native = (vtkParallelCoordinatesView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBrushMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParallelCoordinatesViewWrap::SetBrushModeToAngle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesViewWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesViewWrap>(info.Holder());
	vtkParallelCoordinatesView *native = (vtkParallelCoordinatesView *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetBrushModeToAngle();
}

void VtkParallelCoordinatesViewWrap::SetBrushModeToAxisThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesViewWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesViewWrap>(info.Holder());
	vtkParallelCoordinatesView *native = (vtkParallelCoordinatesView *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetBrushModeToAxisThreshold();
}

void VtkParallelCoordinatesViewWrap::SetBrushModeToFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesViewWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesViewWrap>(info.Holder());
	vtkParallelCoordinatesView *native = (vtkParallelCoordinatesView *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetBrushModeToFunction();
}

void VtkParallelCoordinatesViewWrap::SetBrushModeToLasso(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesViewWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesViewWrap>(info.Holder());
	vtkParallelCoordinatesView *native = (vtkParallelCoordinatesView *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetBrushModeToLasso();
}

void VtkParallelCoordinatesViewWrap::SetBrushOperator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesViewWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesViewWrap>(info.Holder());
	vtkParallelCoordinatesView *native = (vtkParallelCoordinatesView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBrushOperator(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParallelCoordinatesViewWrap::SetBrushOperatorToAdd(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesViewWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesViewWrap>(info.Holder());
	vtkParallelCoordinatesView *native = (vtkParallelCoordinatesView *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetBrushOperatorToAdd();
}

void VtkParallelCoordinatesViewWrap::SetBrushOperatorToIntersect(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesViewWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesViewWrap>(info.Holder());
	vtkParallelCoordinatesView *native = (vtkParallelCoordinatesView *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetBrushOperatorToIntersect();
}

void VtkParallelCoordinatesViewWrap::SetBrushOperatorToReplace(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesViewWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesViewWrap>(info.Holder());
	vtkParallelCoordinatesView *native = (vtkParallelCoordinatesView *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetBrushOperatorToReplace();
}

void VtkParallelCoordinatesViewWrap::SetBrushOperatorToSubtract(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesViewWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesViewWrap>(info.Holder());
	vtkParallelCoordinatesView *native = (vtkParallelCoordinatesView *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetBrushOperatorToSubtract();
}

void VtkParallelCoordinatesViewWrap::SetCurrentBrushClass(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesViewWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesViewWrap>(info.Holder());
	vtkParallelCoordinatesView *native = (vtkParallelCoordinatesView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCurrentBrushClass(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParallelCoordinatesViewWrap::SetInpsectModeToSelectData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesViewWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesViewWrap>(info.Holder());
	vtkParallelCoordinatesView *native = (vtkParallelCoordinatesView *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetInpsectModeToSelectData();
}

void VtkParallelCoordinatesViewWrap::SetInspectMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesViewWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesViewWrap>(info.Holder());
	vtkParallelCoordinatesView *native = (vtkParallelCoordinatesView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInspectMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParallelCoordinatesViewWrap::SetInspectModeToManipulateAxes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesViewWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesViewWrap>(info.Holder());
	vtkParallelCoordinatesView *native = (vtkParallelCoordinatesView *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetInspectModeToManipulateAxes();
}

void VtkParallelCoordinatesViewWrap::SetMaximumNumberOfBrushPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesViewWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesViewWrap>(info.Holder());
	vtkParallelCoordinatesView *native = (vtkParallelCoordinatesView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaximumNumberOfBrushPoints(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

