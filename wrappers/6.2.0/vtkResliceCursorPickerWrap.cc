/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPickerWrap.h"
#include "vtkResliceCursorPickerWrap.h"
#include "vtkObjectWrap.h"
#include "vtkRendererWrap.h"
#include "vtkResliceCursorPolyDataAlgorithmWrap.h"
#include "vtkMatrix4x4Wrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkResliceCursorPickerWrap::ptpl;

VtkResliceCursorPickerWrap::VtkResliceCursorPickerWrap()
{ }

VtkResliceCursorPickerWrap::VtkResliceCursorPickerWrap(vtkSmartPointer<vtkResliceCursorPicker> _native)
{ native = _native; }

VtkResliceCursorPickerWrap::~VtkResliceCursorPickerWrap()
{ }

void VtkResliceCursorPickerWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkResliceCursorPicker").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ResliceCursorPicker").ToLocalChecked(), ConstructorGetter);
}

void VtkResliceCursorPickerWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkResliceCursorPickerWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPickerWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPickerWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkResliceCursorPickerWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetPickedAxis1", GetPickedAxis1);
	Nan::SetPrototypeMethod(tpl, "getPickedAxis1", GetPickedAxis1);

	Nan::SetPrototypeMethod(tpl, "GetPickedAxis2", GetPickedAxis2);
	Nan::SetPrototypeMethod(tpl, "getPickedAxis2", GetPickedAxis2);

	Nan::SetPrototypeMethod(tpl, "GetPickedCenter", GetPickedCenter);
	Nan::SetPrototypeMethod(tpl, "getPickedCenter", GetPickedCenter);

	Nan::SetPrototypeMethod(tpl, "GetResliceCursorAlgorithm", GetResliceCursorAlgorithm);
	Nan::SetPrototypeMethod(tpl, "getResliceCursorAlgorithm", GetResliceCursorAlgorithm);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Pick", Pick);
	Nan::SetPrototypeMethod(tpl, "pick", Pick);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetResliceCursorAlgorithm", SetResliceCursorAlgorithm);
	Nan::SetPrototypeMethod(tpl, "setResliceCursorAlgorithm", SetResliceCursorAlgorithm);

	Nan::SetPrototypeMethod(tpl, "SetTransformMatrix", SetTransformMatrix);
	Nan::SetPrototypeMethod(tpl, "setTransformMatrix", SetTransformMatrix);

	ptpl.Reset( tpl );
}

void VtkResliceCursorPickerWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkResliceCursorPicker> native = vtkSmartPointer<vtkResliceCursorPicker>::New();
		VtkResliceCursorPickerWrap* obj = new VtkResliceCursorPickerWrap(native);
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

void VtkResliceCursorPickerWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorPickerWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorPickerWrap>(info.Holder());
	vtkResliceCursorPicker *native = (vtkResliceCursorPicker *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkResliceCursorPickerWrap::GetPickedAxis1(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorPickerWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorPickerWrap>(info.Holder());
	vtkResliceCursorPicker *native = (vtkResliceCursorPicker *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPickedAxis1();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkResliceCursorPickerWrap::GetPickedAxis2(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorPickerWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorPickerWrap>(info.Holder());
	vtkResliceCursorPicker *native = (vtkResliceCursorPicker *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPickedAxis2();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkResliceCursorPickerWrap::GetPickedCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorPickerWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorPickerWrap>(info.Holder());
	vtkResliceCursorPicker *native = (vtkResliceCursorPicker *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPickedCenter();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkResliceCursorPickerWrap::GetResliceCursorAlgorithm(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorPickerWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorPickerWrap>(info.Holder());
	vtkResliceCursorPicker *native = (vtkResliceCursorPicker *)wrapper->native.GetPointer();
	vtkResliceCursorPolyDataAlgorithm * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetResliceCursorAlgorithm();
		VtkResliceCursorPolyDataAlgorithmWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkResliceCursorPolyDataAlgorithmWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkResliceCursorPolyDataAlgorithmWrap *w = new VtkResliceCursorPolyDataAlgorithmWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkResliceCursorPickerWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorPickerWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorPickerWrap>(info.Holder());
	vtkResliceCursorPicker *native = (vtkResliceCursorPicker *)wrapper->native.GetPointer();
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

void VtkResliceCursorPickerWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorPickerWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorPickerWrap>(info.Holder());
	vtkResliceCursorPicker *native = (vtkResliceCursorPicker *)wrapper->native.GetPointer();
	vtkResliceCursorPicker * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkResliceCursorPickerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkResliceCursorPickerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkResliceCursorPickerWrap *w = new VtkResliceCursorPickerWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkResliceCursorPickerWrap::Pick(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorPickerWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorPickerWrap>(info.Holder());
	vtkResliceCursorPicker *native = (vtkResliceCursorPicker *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0( v8::Local<v8::Array>::Cast( info[0]->ToObject() ) );
		double b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
		if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1( v8::Local<v8::Array>::Cast( info[1]->ToObject() ) );
			double b1[3];
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 3; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[2]))
			{
				VtkRendererWrap *a2 = ObjectWrap::Unwrap<VtkRendererWrap>(info[2]->ToObject());
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->Pick(
					b0,
					b1,
					(vtkRenderer *) a2->native.GetPointer()
				);
				return;
			}
		}
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[3]))
				{
					VtkRendererWrap *a3 = ObjectWrap::Unwrap<VtkRendererWrap>(info[3]->ToObject());
					int r;
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					r = native->Pick(
						info[0]->NumberValue(),
						info[1]->NumberValue(),
						info[2]->NumberValue(),
						(vtkRenderer *) a3->native.GetPointer()
					);
					info.GetReturnValue().Set(Nan::New(r));
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkResliceCursorPickerWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorPickerWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorPickerWrap>(info.Holder());
	vtkResliceCursorPicker *native = (vtkResliceCursorPicker *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkResliceCursorPicker * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkResliceCursorPickerWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkResliceCursorPickerWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkResliceCursorPickerWrap *w = new VtkResliceCursorPickerWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkResliceCursorPickerWrap::SetResliceCursorAlgorithm(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorPickerWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorPickerWrap>(info.Holder());
	vtkResliceCursorPicker *native = (vtkResliceCursorPicker *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkResliceCursorPolyDataAlgorithmWrap::ptpl))->HasInstance(info[0]))
	{
		VtkResliceCursorPolyDataAlgorithmWrap *a0 = ObjectWrap::Unwrap<VtkResliceCursorPolyDataAlgorithmWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetResliceCursorAlgorithm(
			(vtkResliceCursorPolyDataAlgorithm *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkResliceCursorPickerWrap::SetTransformMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorPickerWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorPickerWrap>(info.Holder());
	vtkResliceCursorPicker *native = (vtkResliceCursorPicker *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMatrix4x4Wrap::ptpl))->HasInstance(info[0]))
	{
		VtkMatrix4x4Wrap *a0 = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTransformMatrix(
			(vtkMatrix4x4 *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

