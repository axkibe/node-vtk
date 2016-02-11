/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkInteractorStyleTrackballCameraWrap.h"
#include "vtkParallelCoordinatesInteractorStyleWrap.h"
#include "vtkObjectWrap.h"
#include "vtkViewportWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkParallelCoordinatesInteractorStyleWrap::ptpl;

VtkParallelCoordinatesInteractorStyleWrap::VtkParallelCoordinatesInteractorStyleWrap()
{ }

VtkParallelCoordinatesInteractorStyleWrap::VtkParallelCoordinatesInteractorStyleWrap(vtkSmartPointer<vtkParallelCoordinatesInteractorStyle> _native)
{ native = _native; }

VtkParallelCoordinatesInteractorStyleWrap::~VtkParallelCoordinatesInteractorStyleWrap()
{ }

void VtkParallelCoordinatesInteractorStyleWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkParallelCoordinatesInteractorStyle").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ParallelCoordinatesInteractorStyle").ToLocalChecked(), ConstructorGetter);
}

void VtkParallelCoordinatesInteractorStyleWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkParallelCoordinatesInteractorStyleWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkInteractorStyleTrackballCameraWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkInteractorStyleTrackballCameraWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkParallelCoordinatesInteractorStyleWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "EndInspect", EndInspect);
	Nan::SetPrototypeMethod(tpl, "endInspect", EndInspect);

	Nan::SetPrototypeMethod(tpl, "EndPan", EndPan);
	Nan::SetPrototypeMethod(tpl, "endPan", EndPan);

	Nan::SetPrototypeMethod(tpl, "EndZoom", EndZoom);
	Nan::SetPrototypeMethod(tpl, "endZoom", EndZoom);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCursorCurrentPosition", GetCursorCurrentPosition);
	Nan::SetPrototypeMethod(tpl, "getCursorCurrentPosition", GetCursorCurrentPosition);

	Nan::SetPrototypeMethod(tpl, "GetCursorLastPosition", GetCursorLastPosition);
	Nan::SetPrototypeMethod(tpl, "getCursorLastPosition", GetCursorLastPosition);

	Nan::SetPrototypeMethod(tpl, "GetCursorStartPosition", GetCursorStartPosition);
	Nan::SetPrototypeMethod(tpl, "getCursorStartPosition", GetCursorStartPosition);

	Nan::SetPrototypeMethod(tpl, "Inspect", Inspect);
	Nan::SetPrototypeMethod(tpl, "inspect", Inspect);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "OnChar", OnChar);
	Nan::SetPrototypeMethod(tpl, "onChar", OnChar);

	Nan::SetPrototypeMethod(tpl, "OnLeave", OnLeave);
	Nan::SetPrototypeMethod(tpl, "onLeave", OnLeave);

	Nan::SetPrototypeMethod(tpl, "OnLeftButtonDown", OnLeftButtonDown);
	Nan::SetPrototypeMethod(tpl, "onLeftButtonDown", OnLeftButtonDown);

	Nan::SetPrototypeMethod(tpl, "OnLeftButtonUp", OnLeftButtonUp);
	Nan::SetPrototypeMethod(tpl, "onLeftButtonUp", OnLeftButtonUp);

	Nan::SetPrototypeMethod(tpl, "OnMiddleButtonDown", OnMiddleButtonDown);
	Nan::SetPrototypeMethod(tpl, "onMiddleButtonDown", OnMiddleButtonDown);

	Nan::SetPrototypeMethod(tpl, "OnMiddleButtonUp", OnMiddleButtonUp);
	Nan::SetPrototypeMethod(tpl, "onMiddleButtonUp", OnMiddleButtonUp);

	Nan::SetPrototypeMethod(tpl, "OnMouseMove", OnMouseMove);
	Nan::SetPrototypeMethod(tpl, "onMouseMove", OnMouseMove);

	Nan::SetPrototypeMethod(tpl, "OnRightButtonDown", OnRightButtonDown);
	Nan::SetPrototypeMethod(tpl, "onRightButtonDown", OnRightButtonDown);

	Nan::SetPrototypeMethod(tpl, "OnRightButtonUp", OnRightButtonUp);
	Nan::SetPrototypeMethod(tpl, "onRightButtonUp", OnRightButtonUp);

	Nan::SetPrototypeMethod(tpl, "Pan", Pan);
	Nan::SetPrototypeMethod(tpl, "pan", Pan);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "StartInspect", StartInspect);
	Nan::SetPrototypeMethod(tpl, "startInspect", StartInspect);

	Nan::SetPrototypeMethod(tpl, "StartPan", StartPan);
	Nan::SetPrototypeMethod(tpl, "startPan", StartPan);

	Nan::SetPrototypeMethod(tpl, "StartZoom", StartZoom);
	Nan::SetPrototypeMethod(tpl, "startZoom", StartZoom);

	Nan::SetPrototypeMethod(tpl, "Zoom", Zoom);
	Nan::SetPrototypeMethod(tpl, "zoom", Zoom);

	ptpl.Reset( tpl );
}

void VtkParallelCoordinatesInteractorStyleWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkParallelCoordinatesInteractorStyle> native = vtkSmartPointer<vtkParallelCoordinatesInteractorStyle>::New();
		VtkParallelCoordinatesInteractorStyleWrap* obj = new VtkParallelCoordinatesInteractorStyleWrap(native);
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

void VtkParallelCoordinatesInteractorStyleWrap::EndInspect(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesInteractorStyleWrap>(info.Holder());
	vtkParallelCoordinatesInteractorStyle *native = (vtkParallelCoordinatesInteractorStyle *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EndInspect();
}

void VtkParallelCoordinatesInteractorStyleWrap::EndPan(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesInteractorStyleWrap>(info.Holder());
	vtkParallelCoordinatesInteractorStyle *native = (vtkParallelCoordinatesInteractorStyle *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EndPan();
}

void VtkParallelCoordinatesInteractorStyleWrap::EndZoom(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesInteractorStyleWrap>(info.Holder());
	vtkParallelCoordinatesInteractorStyle *native = (vtkParallelCoordinatesInteractorStyle *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EndZoom();
}

void VtkParallelCoordinatesInteractorStyleWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesInteractorStyleWrap>(info.Holder());
	vtkParallelCoordinatesInteractorStyle *native = (vtkParallelCoordinatesInteractorStyle *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkParallelCoordinatesInteractorStyleWrap::GetCursorCurrentPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesInteractorStyleWrap>(info.Holder());
	vtkParallelCoordinatesInteractorStyle *native = (vtkParallelCoordinatesInteractorStyle *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewportWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 2 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GetCursorCurrentPosition(
				(vtkViewport *) a0->native.GetPointer(),
				(double *)(a1->Buffer()->GetContents().Data())
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[2];
			if( a1->Length() < 2 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 2; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GetCursorCurrentPosition(
				(vtkViewport *) a0->native.GetPointer(),
				b1
			);
			return;
		}
	}
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCursorCurrentPosition();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkParallelCoordinatesInteractorStyleWrap::GetCursorLastPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesInteractorStyleWrap>(info.Holder());
	vtkParallelCoordinatesInteractorStyle *native = (vtkParallelCoordinatesInteractorStyle *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewportWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 2 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GetCursorLastPosition(
				(vtkViewport *) a0->native.GetPointer(),
				(double *)(a1->Buffer()->GetContents().Data())
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[2];
			if( a1->Length() < 2 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 2; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GetCursorLastPosition(
				(vtkViewport *) a0->native.GetPointer(),
				b1
			);
			return;
		}
	}
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCursorLastPosition();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkParallelCoordinatesInteractorStyleWrap::GetCursorStartPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesInteractorStyleWrap>(info.Holder());
	vtkParallelCoordinatesInteractorStyle *native = (vtkParallelCoordinatesInteractorStyle *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewportWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 2 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GetCursorStartPosition(
				(vtkViewport *) a0->native.GetPointer(),
				(double *)(a1->Buffer()->GetContents().Data())
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[2];
			if( a1->Length() < 2 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 2; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GetCursorStartPosition(
				(vtkViewport *) a0->native.GetPointer(),
				b1
			);
			return;
		}
	}
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCursorStartPosition();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkParallelCoordinatesInteractorStyleWrap::Inspect(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesInteractorStyleWrap>(info.Holder());
	vtkParallelCoordinatesInteractorStyle *native = (vtkParallelCoordinatesInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Inspect(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParallelCoordinatesInteractorStyleWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesInteractorStyleWrap>(info.Holder());
	vtkParallelCoordinatesInteractorStyle *native = (vtkParallelCoordinatesInteractorStyle *)wrapper->native.GetPointer();
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

void VtkParallelCoordinatesInteractorStyleWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesInteractorStyleWrap>(info.Holder());
	vtkParallelCoordinatesInteractorStyle *native = (vtkParallelCoordinatesInteractorStyle *)wrapper->native.GetPointer();
	vtkParallelCoordinatesInteractorStyle * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkParallelCoordinatesInteractorStyleWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkParallelCoordinatesInteractorStyleWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkParallelCoordinatesInteractorStyleWrap *w = new VtkParallelCoordinatesInteractorStyleWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkParallelCoordinatesInteractorStyleWrap::OnChar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesInteractorStyleWrap>(info.Holder());
	vtkParallelCoordinatesInteractorStyle *native = (vtkParallelCoordinatesInteractorStyle *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnChar();
}

void VtkParallelCoordinatesInteractorStyleWrap::OnLeave(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesInteractorStyleWrap>(info.Holder());
	vtkParallelCoordinatesInteractorStyle *native = (vtkParallelCoordinatesInteractorStyle *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnLeave();
}

void VtkParallelCoordinatesInteractorStyleWrap::OnLeftButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesInteractorStyleWrap>(info.Holder());
	vtkParallelCoordinatesInteractorStyle *native = (vtkParallelCoordinatesInteractorStyle *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnLeftButtonDown();
}

void VtkParallelCoordinatesInteractorStyleWrap::OnLeftButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesInteractorStyleWrap>(info.Holder());
	vtkParallelCoordinatesInteractorStyle *native = (vtkParallelCoordinatesInteractorStyle *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnLeftButtonUp();
}

void VtkParallelCoordinatesInteractorStyleWrap::OnMiddleButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesInteractorStyleWrap>(info.Holder());
	vtkParallelCoordinatesInteractorStyle *native = (vtkParallelCoordinatesInteractorStyle *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMiddleButtonDown();
}

void VtkParallelCoordinatesInteractorStyleWrap::OnMiddleButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesInteractorStyleWrap>(info.Holder());
	vtkParallelCoordinatesInteractorStyle *native = (vtkParallelCoordinatesInteractorStyle *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMiddleButtonUp();
}

void VtkParallelCoordinatesInteractorStyleWrap::OnMouseMove(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesInteractorStyleWrap>(info.Holder());
	vtkParallelCoordinatesInteractorStyle *native = (vtkParallelCoordinatesInteractorStyle *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMouseMove();
}

void VtkParallelCoordinatesInteractorStyleWrap::OnRightButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesInteractorStyleWrap>(info.Holder());
	vtkParallelCoordinatesInteractorStyle *native = (vtkParallelCoordinatesInteractorStyle *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnRightButtonDown();
}

void VtkParallelCoordinatesInteractorStyleWrap::OnRightButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesInteractorStyleWrap>(info.Holder());
	vtkParallelCoordinatesInteractorStyle *native = (vtkParallelCoordinatesInteractorStyle *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnRightButtonUp();
}

void VtkParallelCoordinatesInteractorStyleWrap::Pan(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesInteractorStyleWrap>(info.Holder());
	vtkParallelCoordinatesInteractorStyle *native = (vtkParallelCoordinatesInteractorStyle *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Pan();
}

void VtkParallelCoordinatesInteractorStyleWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesInteractorStyleWrap>(info.Holder());
	vtkParallelCoordinatesInteractorStyle *native = (vtkParallelCoordinatesInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkParallelCoordinatesInteractorStyle * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkParallelCoordinatesInteractorStyleWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkParallelCoordinatesInteractorStyleWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkParallelCoordinatesInteractorStyleWrap *w = new VtkParallelCoordinatesInteractorStyleWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParallelCoordinatesInteractorStyleWrap::StartInspect(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesInteractorStyleWrap>(info.Holder());
	vtkParallelCoordinatesInteractorStyle *native = (vtkParallelCoordinatesInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->StartInspect(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParallelCoordinatesInteractorStyleWrap::StartPan(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesInteractorStyleWrap>(info.Holder());
	vtkParallelCoordinatesInteractorStyle *native = (vtkParallelCoordinatesInteractorStyle *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->StartPan();
}

void VtkParallelCoordinatesInteractorStyleWrap::StartZoom(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesInteractorStyleWrap>(info.Holder());
	vtkParallelCoordinatesInteractorStyle *native = (vtkParallelCoordinatesInteractorStyle *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->StartZoom();
}

void VtkParallelCoordinatesInteractorStyleWrap::Zoom(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesInteractorStyleWrap>(info.Holder());
	vtkParallelCoordinatesInteractorStyle *native = (vtkParallelCoordinatesInteractorStyle *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Zoom();
}

