/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPointPlacerWrap.h"
#include "vtkTerrainDataPointPlacerWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPropWrap.h"
#include "vtkRendererWrap.h"
#include "vtkPropPickerWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTerrainDataPointPlacerWrap::ptpl;

VtkTerrainDataPointPlacerWrap::VtkTerrainDataPointPlacerWrap()
{ }

VtkTerrainDataPointPlacerWrap::VtkTerrainDataPointPlacerWrap(vtkSmartPointer<vtkTerrainDataPointPlacer> _native)
{ native = _native; }

VtkTerrainDataPointPlacerWrap::~VtkTerrainDataPointPlacerWrap()
{ }

void VtkTerrainDataPointPlacerWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTerrainDataPointPlacer").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TerrainDataPointPlacer").ToLocalChecked(), ConstructorGetter);
}

void VtkTerrainDataPointPlacerWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTerrainDataPointPlacerWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPointPlacerWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPointPlacerWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTerrainDataPointPlacerWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddProp", AddProp);
	Nan::SetPrototypeMethod(tpl, "addProp", AddProp);

	Nan::SetPrototypeMethod(tpl, "ComputeWorldPosition", ComputeWorldPosition);
	Nan::SetPrototypeMethod(tpl, "computeWorldPosition", ComputeWorldPosition);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetHeightOffset", GetHeightOffset);
	Nan::SetPrototypeMethod(tpl, "getHeightOffset", GetHeightOffset);

	Nan::SetPrototypeMethod(tpl, "GetPropPicker", GetPropPicker);
	Nan::SetPrototypeMethod(tpl, "getPropPicker", GetPropPicker);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveAllProps", RemoveAllProps);
	Nan::SetPrototypeMethod(tpl, "removeAllProps", RemoveAllProps);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetHeightOffset", SetHeightOffset);
	Nan::SetPrototypeMethod(tpl, "setHeightOffset", SetHeightOffset);

	Nan::SetPrototypeMethod(tpl, "ValidateDisplayPosition", ValidateDisplayPosition);
	Nan::SetPrototypeMethod(tpl, "validateDisplayPosition", ValidateDisplayPosition);

	Nan::SetPrototypeMethod(tpl, "ValidateWorldPosition", ValidateWorldPosition);
	Nan::SetPrototypeMethod(tpl, "validateWorldPosition", ValidateWorldPosition);

	ptpl.Reset( tpl );
}

void VtkTerrainDataPointPlacerWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTerrainDataPointPlacer> native = vtkSmartPointer<vtkTerrainDataPointPlacer>::New();
		VtkTerrainDataPointPlacerWrap* obj = new VtkTerrainDataPointPlacerWrap(native);
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

void VtkTerrainDataPointPlacerWrap::AddProp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTerrainDataPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkTerrainDataPointPlacerWrap>(info.Holder());
	vtkTerrainDataPointPlacer *native = (vtkTerrainDataPointPlacer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropWrap *a0 = ObjectWrap::Unwrap<VtkPropWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddProp(
			(vtkProp *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTerrainDataPointPlacerWrap::ComputeWorldPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTerrainDataPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkTerrainDataPointPlacerWrap>(info.Holder());
	vtkTerrainDataPointPlacer *native = (vtkTerrainDataPointPlacer *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1( v8::Local<v8::Array>::Cast( info[1]->ToObject() ) );
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
			if(info.Length() > 2 && info[2]->IsArray())
			{
				v8::Local<v8::Array>a2( v8::Local<v8::Array>::Cast( info[2]->ToObject() ) );
				double b2[3];
				if( a2->Length() < 3 )
				{
					Nan::ThrowError("Array too short.");
					return;
				}

				for( i = 0; i < 3; i++ )
				{
					if( !a2->Get(i)->IsNumber() )
					{
						Nan::ThrowError("Array contents invalid.");
						return;
					}
					b2[i] = a2->Get(i)->NumberValue();
				}
				if(info.Length() > 3 && info[3]->IsArray())
				{
					v8::Local<v8::Array>a3( v8::Local<v8::Array>::Cast( info[3]->ToObject() ) );
					double b3[3];
					if( a3->Length() < 3 )
					{
						Nan::ThrowError("Array too short.");
						return;
					}

					for( i = 0; i < 3; i++ )
					{
						if( !a3->Get(i)->IsNumber() )
						{
							Nan::ThrowError("Array contents invalid.");
							return;
						}
						b3[i] = a3->Get(i)->NumberValue();
					}
					if(info.Length() > 4 && info[4]->IsArray())
					{
						v8::Local<v8::Array>a4( v8::Local<v8::Array>::Cast( info[4]->ToObject() ) );
						double b4[9];
						if( a4->Length() < 9 )
						{
							Nan::ThrowError("Array too short.");
							return;
						}

						for( i = 0; i < 9; i++ )
						{
							if( !a4->Get(i)->IsNumber() )
							{
								Nan::ThrowError("Array contents invalid.");
								return;
							}
							b4[i] = a4->Get(i)->NumberValue();
						}
						int r;
						if(info.Length() != 5)
						{
							Nan::ThrowError("Too many parameters.");
							return;
						}
						r = native->ComputeWorldPosition(
							(vtkRenderer *) a0->native.GetPointer(),
							b1,
							b2,
							b3,
							b4
						);
						info.GetReturnValue().Set(Nan::New(r));
						return;
					}
					int r;
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					r = native->ComputeWorldPosition(
						(vtkRenderer *) a0->native.GetPointer(),
						b1,
						b2,
						b3
					);
					info.GetReturnValue().Set(Nan::New(r));
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTerrainDataPointPlacerWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTerrainDataPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkTerrainDataPointPlacerWrap>(info.Holder());
	vtkTerrainDataPointPlacer *native = (vtkTerrainDataPointPlacer *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTerrainDataPointPlacerWrap::GetHeightOffset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTerrainDataPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkTerrainDataPointPlacerWrap>(info.Holder());
	vtkTerrainDataPointPlacer *native = (vtkTerrainDataPointPlacer *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHeightOffset();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTerrainDataPointPlacerWrap::GetPropPicker(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTerrainDataPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkTerrainDataPointPlacerWrap>(info.Holder());
	vtkTerrainDataPointPlacer *native = (vtkTerrainDataPointPlacer *)wrapper->native.GetPointer();
	vtkPropPicker * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPropPicker();
		VtkPropPickerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPropPickerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropPickerWrap *w = new VtkPropPickerWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTerrainDataPointPlacerWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTerrainDataPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkTerrainDataPointPlacerWrap>(info.Holder());
	vtkTerrainDataPointPlacer *native = (vtkTerrainDataPointPlacer *)wrapper->native.GetPointer();
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

void VtkTerrainDataPointPlacerWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTerrainDataPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkTerrainDataPointPlacerWrap>(info.Holder());
	vtkTerrainDataPointPlacer *native = (vtkTerrainDataPointPlacer *)wrapper->native.GetPointer();
	vtkTerrainDataPointPlacer * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkTerrainDataPointPlacerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTerrainDataPointPlacerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTerrainDataPointPlacerWrap *w = new VtkTerrainDataPointPlacerWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTerrainDataPointPlacerWrap::RemoveAllProps(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTerrainDataPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkTerrainDataPointPlacerWrap>(info.Holder());
	vtkTerrainDataPointPlacer *native = (vtkTerrainDataPointPlacer *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveAllProps();
}

void VtkTerrainDataPointPlacerWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTerrainDataPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkTerrainDataPointPlacerWrap>(info.Holder());
	vtkTerrainDataPointPlacer *native = (vtkTerrainDataPointPlacer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTerrainDataPointPlacer * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkTerrainDataPointPlacerWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTerrainDataPointPlacerWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTerrainDataPointPlacerWrap *w = new VtkTerrainDataPointPlacerWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTerrainDataPointPlacerWrap::SetHeightOffset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTerrainDataPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkTerrainDataPointPlacerWrap>(info.Holder());
	vtkTerrainDataPointPlacer *native = (vtkTerrainDataPointPlacer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHeightOffset(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTerrainDataPointPlacerWrap::ValidateDisplayPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTerrainDataPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkTerrainDataPointPlacerWrap>(info.Holder());
	vtkTerrainDataPointPlacer *native = (vtkTerrainDataPointPlacer *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1( v8::Local<v8::Array>::Cast( info[1]->ToObject() ) );
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
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->ValidateDisplayPosition(
				(vtkRenderer *) a0->native.GetPointer(),
				b1
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTerrainDataPointPlacerWrap::ValidateWorldPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTerrainDataPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkTerrainDataPointPlacerWrap>(info.Holder());
	vtkTerrainDataPointPlacer *native = (vtkTerrainDataPointPlacer *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0( v8::Local<v8::Array>::Cast( info[0]->ToObject() ) );
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
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
			double b1[9];
			if( a1->Length() < 9 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 9; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->ValidateWorldPosition(
				b0,
				b1
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->ValidateWorldPosition(
			b0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

