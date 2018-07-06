/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkUnstructuredGridVolumeMapperWrap.h"
#include "vtkProjectedTetrahedraMapperWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkVisibilitySortWrap.h"
#include "vtkDataArrayWrap.h"
#include "vtkVolumePropertyWrap.h"
#include "vtkPointsWrap.h"
#include "vtkFloatArrayWrap.h"
#include "vtkRenderWindowWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkProjectedTetrahedraMapperWrap::ptpl;

VtkProjectedTetrahedraMapperWrap::VtkProjectedTetrahedraMapperWrap()
{ }

VtkProjectedTetrahedraMapperWrap::VtkProjectedTetrahedraMapperWrap(vtkSmartPointer<vtkProjectedTetrahedraMapper> _native)
{ native = _native; }

VtkProjectedTetrahedraMapperWrap::~VtkProjectedTetrahedraMapperWrap()
{ }

void VtkProjectedTetrahedraMapperWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkProjectedTetrahedraMapper").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ProjectedTetrahedraMapper").ToLocalChecked(), ConstructorGetter);
}

void VtkProjectedTetrahedraMapperWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkProjectedTetrahedraMapperWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkUnstructuredGridVolumeMapperWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkUnstructuredGridVolumeMapperWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkProjectedTetrahedraMapperWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetVisibilitySort", GetVisibilitySort);
	Nan::SetPrototypeMethod(tpl, "getVisibilitySort", GetVisibilitySort);

	Nan::SetPrototypeMethod(tpl, "IsSupported", IsSupported);
	Nan::SetPrototypeMethod(tpl, "isSupported", IsSupported);

	Nan::SetPrototypeMethod(tpl, "MapScalarsToColors", MapScalarsToColors);
	Nan::SetPrototypeMethod(tpl, "mapScalarsToColors", MapScalarsToColors);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetVisibilitySort", SetVisibilitySort);
	Nan::SetPrototypeMethod(tpl, "setVisibilitySort", SetVisibilitySort);

	Nan::SetPrototypeMethod(tpl, "TransformPoints", TransformPoints);
	Nan::SetPrototypeMethod(tpl, "transformPoints", TransformPoints);

#ifdef VTK_NODE_PLUS_VTKPROJECTEDTETRAHEDRAMAPPERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPROJECTEDTETRAHEDRAMAPPERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkProjectedTetrahedraMapperWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkProjectedTetrahedraMapper> native = vtkSmartPointer<vtkProjectedTetrahedraMapper>::New();
		VtkProjectedTetrahedraMapperWrap* obj = new VtkProjectedTetrahedraMapperWrap(native);
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

void VtkProjectedTetrahedraMapperWrap::GetVisibilitySort(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectedTetrahedraMapperWrap *wrapper = ObjectWrap::Unwrap<VtkProjectedTetrahedraMapperWrap>(info.Holder());
	vtkProjectedTetrahedraMapper *native = (vtkProjectedTetrahedraMapper *)wrapper->native.GetPointer();
	vtkVisibilitySort * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVisibilitySort();
	VtkVisibilitySortWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkVisibilitySortWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkVisibilitySortWrap *w = new VtkVisibilitySortWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkProjectedTetrahedraMapperWrap::IsSupported(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectedTetrahedraMapperWrap *wrapper = ObjectWrap::Unwrap<VtkProjectedTetrahedraMapperWrap>(info.Holder());
	vtkProjectedTetrahedraMapper *native = (vtkProjectedTetrahedraMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRenderWindowWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRenderWindowWrap *a0 = ObjectWrap::Unwrap<VtkRenderWindowWrap>(info[0]->ToObject());
		bool r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsSupported(
			(vtkRenderWindow *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProjectedTetrahedraMapperWrap::MapScalarsToColors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectedTetrahedraMapperWrap *wrapper = ObjectWrap::Unwrap<VtkProjectedTetrahedraMapperWrap>(info.Holder());
	vtkProjectedTetrahedraMapper *native = (vtkProjectedTetrahedraMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataArrayWrap *a0 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkVolumePropertyWrap::ptpl))->HasInstance(info[1]))
		{
			VtkVolumePropertyWrap *a1 = ObjectWrap::Unwrap<VtkVolumePropertyWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[2]))
			{
				VtkDataArrayWrap *a2 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[2]->ToObject());
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->MapScalarsToColors(
					(vtkDataArray *) a0->native.GetPointer(),
					(vtkVolumeProperty *) a1->native.GetPointer(),
					(vtkDataArray *) a2->native.GetPointer()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProjectedTetrahedraMapperWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectedTetrahedraMapperWrap *wrapper = ObjectWrap::Unwrap<VtkProjectedTetrahedraMapperWrap>(info.Holder());
	vtkProjectedTetrahedraMapper *native = (vtkProjectedTetrahedraMapper *)wrapper->native.GetPointer();
	vtkProjectedTetrahedraMapper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkProjectedTetrahedraMapperWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkProjectedTetrahedraMapperWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProjectedTetrahedraMapperWrap *w = new VtkProjectedTetrahedraMapperWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkProjectedTetrahedraMapperWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectedTetrahedraMapperWrap *wrapper = ObjectWrap::Unwrap<VtkProjectedTetrahedraMapperWrap>(info.Holder());
	vtkProjectedTetrahedraMapper *native = (vtkProjectedTetrahedraMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkProjectedTetrahedraMapper * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkProjectedTetrahedraMapperWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkProjectedTetrahedraMapperWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkProjectedTetrahedraMapperWrap *w = new VtkProjectedTetrahedraMapperWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProjectedTetrahedraMapperWrap::SetVisibilitySort(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectedTetrahedraMapperWrap *wrapper = ObjectWrap::Unwrap<VtkProjectedTetrahedraMapperWrap>(info.Holder());
	vtkProjectedTetrahedraMapper *native = (vtkProjectedTetrahedraMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkVisibilitySortWrap::ptpl))->HasInstance(info[0]))
	{
		VtkVisibilitySortWrap *a0 = ObjectWrap::Unwrap<VtkVisibilitySortWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVisibilitySort(
			(vtkVisibilitySort *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProjectedTetrahedraMapperWrap::TransformPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectedTetrahedraMapperWrap *wrapper = ObjectWrap::Unwrap<VtkProjectedTetrahedraMapperWrap>(info.Holder());
	vtkProjectedTetrahedraMapper *native = (vtkProjectedTetrahedraMapper *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPointsWrap *a0 = ObjectWrap::Unwrap<VtkPointsWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsFloat32Array())
		{
			v8::Local<v8::Float32Array>a1(v8::Local<v8::Float32Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 16 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() > 2 && info[2]->IsFloat32Array())
			{
				v8::Local<v8::Float32Array>a2(v8::Local<v8::Float32Array>::Cast(info[2]->ToObject()));
				if( a2->Length() < 16 )
				{
					Nan::ThrowError("Array too short.");
					return;
				}

				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkFloatArrayWrap::ptpl))->HasInstance(info[3]))
				{
					VtkFloatArrayWrap *a3 = ObjectWrap::Unwrap<VtkFloatArrayWrap>(info[3]->ToObject());
										if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->TransformPoints(
						(vtkPoints *) a0->native.GetPointer(),
						(float *)(a1->Buffer()->GetContents().Data()),
						(float *)(a2->Buffer()->GetContents().Data()),
						(vtkFloatArray *) a3->native.GetPointer()
					);
					return;
				}
			}
			else if(info.Length() > 2 && info[2]->IsArray())
			{
				v8::Local<v8::Array>a2(v8::Local<v8::Array>::Cast(info[2]->ToObject()));
				float b2[16];
				if( a2->Length() < 16 )
				{
					Nan::ThrowError("Array too short.");
					return;
				}

				for( i = 0; i < 16; i++ )
				{
					if( !a2->Get(i)->IsNumber() )
					{
						Nan::ThrowError("Array contents invalid.");
						return;
					}
					b2[i] = a2->Get(i)->NumberValue();
				}
				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkFloatArrayWrap::ptpl))->HasInstance(info[3]))
				{
					VtkFloatArrayWrap *a3 = ObjectWrap::Unwrap<VtkFloatArrayWrap>(info[3]->ToObject());
										if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->TransformPoints(
						(vtkPoints *) a0->native.GetPointer(),
						(float *)(a1->Buffer()->GetContents().Data()),
						b2,
						(vtkFloatArray *) a3->native.GetPointer()
					);
					return;
				}
			}
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			float b1[16];
			if( a1->Length() < 16 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 16; i++ )
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
				v8::Local<v8::Array>a2(v8::Local<v8::Array>::Cast(info[2]->ToObject()));
				float b2[16];
				if( a2->Length() < 16 )
				{
					Nan::ThrowError("Array too short.");
					return;
				}

				for( i = 0; i < 16; i++ )
				{
					if( !a2->Get(i)->IsNumber() )
					{
						Nan::ThrowError("Array contents invalid.");
						return;
					}
					b2[i] = a2->Get(i)->NumberValue();
				}
				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkFloatArrayWrap::ptpl))->HasInstance(info[3]))
				{
					VtkFloatArrayWrap *a3 = ObjectWrap::Unwrap<VtkFloatArrayWrap>(info[3]->ToObject());
										if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->TransformPoints(
						(vtkPoints *) a0->native.GetPointer(),
						b1,
						b2,
						(vtkFloatArray *) a3->native.GetPointer()
					);
					return;
				}
			}
			else if(info.Length() > 2 && info[2]->IsFloat32Array())
			{
				v8::Local<v8::Float32Array>a2(v8::Local<v8::Float32Array>::Cast(info[2]->ToObject()));
				if( a2->Length() < 16 )
				{
					Nan::ThrowError("Array too short.");
					return;
				}

				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkFloatArrayWrap::ptpl))->HasInstance(info[3]))
				{
					VtkFloatArrayWrap *a3 = ObjectWrap::Unwrap<VtkFloatArrayWrap>(info[3]->ToObject());
										if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->TransformPoints(
						(vtkPoints *) a0->native.GetPointer(),
						b1,
						(float *)(a2->Buffer()->GetContents().Data()),
						(vtkFloatArray *) a3->native.GetPointer()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

