/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkSelectVisiblePointsWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkRendererWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSelectVisiblePointsWrap::ptpl;

VtkSelectVisiblePointsWrap::VtkSelectVisiblePointsWrap()
{ }

VtkSelectVisiblePointsWrap::VtkSelectVisiblePointsWrap(vtkSmartPointer<vtkSelectVisiblePoints> _native)
{ native = _native; }

VtkSelectVisiblePointsWrap::~VtkSelectVisiblePointsWrap()
{ }

void VtkSelectVisiblePointsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSelectVisiblePoints").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SelectVisiblePoints").ToLocalChecked(), ConstructorGetter);
}

void VtkSelectVisiblePointsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSelectVisiblePointsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSelectVisiblePointsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetRenderer", GetRenderer);
	Nan::SetPrototypeMethod(tpl, "getRenderer", GetRenderer);

	Nan::SetPrototypeMethod(tpl, "GetSelectInvisible", GetSelectInvisible);
	Nan::SetPrototypeMethod(tpl, "getSelectInvisible", GetSelectInvisible);

	Nan::SetPrototypeMethod(tpl, "GetSelection", GetSelection);
	Nan::SetPrototypeMethod(tpl, "getSelection", GetSelection);

	Nan::SetPrototypeMethod(tpl, "GetSelectionWindow", GetSelectionWindow);
	Nan::SetPrototypeMethod(tpl, "getSelectionWindow", GetSelectionWindow);

	Nan::SetPrototypeMethod(tpl, "GetTolerance", GetTolerance);
	Nan::SetPrototypeMethod(tpl, "getTolerance", GetTolerance);

	Nan::SetPrototypeMethod(tpl, "GetToleranceMaxValue", GetToleranceMaxValue);
	Nan::SetPrototypeMethod(tpl, "getToleranceMaxValue", GetToleranceMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetToleranceMinValue", GetToleranceMinValue);
	Nan::SetPrototypeMethod(tpl, "getToleranceMinValue", GetToleranceMinValue);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SelectInvisibleOff", SelectInvisibleOff);
	Nan::SetPrototypeMethod(tpl, "selectInvisibleOff", SelectInvisibleOff);

	Nan::SetPrototypeMethod(tpl, "SelectInvisibleOn", SelectInvisibleOn);
	Nan::SetPrototypeMethod(tpl, "selectInvisibleOn", SelectInvisibleOn);

	Nan::SetPrototypeMethod(tpl, "SelectionWindowOff", SelectionWindowOff);
	Nan::SetPrototypeMethod(tpl, "selectionWindowOff", SelectionWindowOff);

	Nan::SetPrototypeMethod(tpl, "SelectionWindowOn", SelectionWindowOn);
	Nan::SetPrototypeMethod(tpl, "selectionWindowOn", SelectionWindowOn);

	Nan::SetPrototypeMethod(tpl, "SetRenderer", SetRenderer);
	Nan::SetPrototypeMethod(tpl, "setRenderer", SetRenderer);

	Nan::SetPrototypeMethod(tpl, "SetSelectInvisible", SetSelectInvisible);
	Nan::SetPrototypeMethod(tpl, "setSelectInvisible", SetSelectInvisible);

	Nan::SetPrototypeMethod(tpl, "SetSelection", SetSelection);
	Nan::SetPrototypeMethod(tpl, "setSelection", SetSelection);

	Nan::SetPrototypeMethod(tpl, "SetSelectionWindow", SetSelectionWindow);
	Nan::SetPrototypeMethod(tpl, "setSelectionWindow", SetSelectionWindow);

	Nan::SetPrototypeMethod(tpl, "SetTolerance", SetTolerance);
	Nan::SetPrototypeMethod(tpl, "setTolerance", SetTolerance);

#ifdef VTK_NODE_PLUS_VTKSELECTVISIBLEPOINTSWRAP_INITPTPL
	VTK_NODE_PLUS_VTKSELECTVISIBLEPOINTSWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkSelectVisiblePointsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSelectVisiblePoints> native = vtkSmartPointer<vtkSelectVisiblePoints>::New();
		VtkSelectVisiblePointsWrap* obj = new VtkSelectVisiblePointsWrap(native);
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

void VtkSelectVisiblePointsWrap::GetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectVisiblePointsWrap *wrapper = ObjectWrap::Unwrap<VtkSelectVisiblePointsWrap>(info.Holder());
	vtkSelectVisiblePoints *native = (vtkSelectVisiblePoints *)wrapper->native.GetPointer();
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
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSelectVisiblePointsWrap::GetSelectInvisible(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectVisiblePointsWrap *wrapper = ObjectWrap::Unwrap<VtkSelectVisiblePointsWrap>(info.Holder());
	vtkSelectVisiblePoints *native = (vtkSelectVisiblePoints *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectInvisible();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSelectVisiblePointsWrap::GetSelection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectVisiblePointsWrap *wrapper = ObjectWrap::Unwrap<VtkSelectVisiblePointsWrap>(info.Holder());
	vtkSelectVisiblePoints *native = (vtkSelectVisiblePoints *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelection();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 4 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 4);
	memcpy(ab->GetContents().Data(), r, 4 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkSelectVisiblePointsWrap::GetSelectionWindow(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectVisiblePointsWrap *wrapper = ObjectWrap::Unwrap<VtkSelectVisiblePointsWrap>(info.Holder());
	vtkSelectVisiblePoints *native = (vtkSelectVisiblePoints *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectionWindow();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSelectVisiblePointsWrap::GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectVisiblePointsWrap *wrapper = ObjectWrap::Unwrap<VtkSelectVisiblePointsWrap>(info.Holder());
	vtkSelectVisiblePoints *native = (vtkSelectVisiblePoints *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTolerance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSelectVisiblePointsWrap::GetToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectVisiblePointsWrap *wrapper = ObjectWrap::Unwrap<VtkSelectVisiblePointsWrap>(info.Holder());
	vtkSelectVisiblePoints *native = (vtkSelectVisiblePoints *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetToleranceMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSelectVisiblePointsWrap::GetToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectVisiblePointsWrap *wrapper = ObjectWrap::Unwrap<VtkSelectVisiblePointsWrap>(info.Holder());
	vtkSelectVisiblePoints *native = (vtkSelectVisiblePoints *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetToleranceMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSelectVisiblePointsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectVisiblePointsWrap *wrapper = ObjectWrap::Unwrap<VtkSelectVisiblePointsWrap>(info.Holder());
	vtkSelectVisiblePoints *native = (vtkSelectVisiblePoints *)wrapper->native.GetPointer();
	vtkSelectVisiblePoints * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkSelectVisiblePointsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSelectVisiblePointsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSelectVisiblePointsWrap *w = new VtkSelectVisiblePointsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSelectVisiblePointsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectVisiblePointsWrap *wrapper = ObjectWrap::Unwrap<VtkSelectVisiblePointsWrap>(info.Holder());
	vtkSelectVisiblePoints *native = (vtkSelectVisiblePoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkSelectVisiblePoints * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkSelectVisiblePointsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSelectVisiblePointsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSelectVisiblePointsWrap *w = new VtkSelectVisiblePointsWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSelectVisiblePointsWrap::SelectInvisibleOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectVisiblePointsWrap *wrapper = ObjectWrap::Unwrap<VtkSelectVisiblePointsWrap>(info.Holder());
	vtkSelectVisiblePoints *native = (vtkSelectVisiblePoints *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SelectInvisibleOff();
}

void VtkSelectVisiblePointsWrap::SelectInvisibleOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectVisiblePointsWrap *wrapper = ObjectWrap::Unwrap<VtkSelectVisiblePointsWrap>(info.Holder());
	vtkSelectVisiblePoints *native = (vtkSelectVisiblePoints *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SelectInvisibleOn();
}

void VtkSelectVisiblePointsWrap::SelectionWindowOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectVisiblePointsWrap *wrapper = ObjectWrap::Unwrap<VtkSelectVisiblePointsWrap>(info.Holder());
	vtkSelectVisiblePoints *native = (vtkSelectVisiblePoints *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SelectionWindowOff();
}

void VtkSelectVisiblePointsWrap::SelectionWindowOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectVisiblePointsWrap *wrapper = ObjectWrap::Unwrap<VtkSelectVisiblePointsWrap>(info.Holder());
	vtkSelectVisiblePoints *native = (vtkSelectVisiblePoints *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SelectionWindowOn();
}

void VtkSelectVisiblePointsWrap::SetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectVisiblePointsWrap *wrapper = ObjectWrap::Unwrap<VtkSelectVisiblePointsWrap>(info.Holder());
	vtkSelectVisiblePoints *native = (vtkSelectVisiblePoints *)wrapper->native.GetPointer();
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

void VtkSelectVisiblePointsWrap::SetSelectInvisible(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectVisiblePointsWrap *wrapper = ObjectWrap::Unwrap<VtkSelectVisiblePointsWrap>(info.Holder());
	vtkSelectVisiblePoints *native = (vtkSelectVisiblePoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectInvisible(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSelectVisiblePointsWrap::SetSelection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectVisiblePointsWrap *wrapper = ObjectWrap::Unwrap<VtkSelectVisiblePointsWrap>(info.Holder());
	vtkSelectVisiblePoints *native = (vtkSelectVisiblePoints *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32Array())
	{
		v8::Local<v8::Int32Array>a0(v8::Local<v8::Int32Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 4 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelection(
			(int *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		int b0[4];
		if( a0->Length() < 4 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 4; i++ )
		{
			if( !a0->Get(i)->IsInt32() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->Int32Value();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelection(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
										if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->SetSelection(
						info[0]->Int32Value(),
						info[1]->Int32Value(),
						info[2]->Int32Value(),
						info[3]->Int32Value()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSelectVisiblePointsWrap::SetSelectionWindow(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectVisiblePointsWrap *wrapper = ObjectWrap::Unwrap<VtkSelectVisiblePointsWrap>(info.Holder());
	vtkSelectVisiblePoints *native = (vtkSelectVisiblePoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectionWindow(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSelectVisiblePointsWrap::SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectVisiblePointsWrap *wrapper = ObjectWrap::Unwrap<VtkSelectVisiblePointsWrap>(info.Holder());
	vtkSelectVisiblePoints *native = (vtkSelectVisiblePoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTolerance(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

